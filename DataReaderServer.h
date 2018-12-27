//
// Created by jonat on 12/16/2018.
//

#ifndef PROJECT_DATAREADERSERVER_H
#define PROJECT_DATAREADERSERVER_H

#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <unistd.h>
#include <netinet/in.h>
#include "DataControl.h"
#include <string.h>
#include <vector>
#include <sys/socket.h>
#include <map>
#include <iostream>
#include <pthread.h>




struct param {
    int port;
    int rate;
    DataControl* dataControl;
    int newsockfd;
    pthread_mutex_t m;
};
using namespace std;
class DataReaderServer {
    pthread_mutex_t mutex;
    int sockfd;



public:
    DataReaderServer(int port, int rate, DataControl* data) {

        pthread_t trid;
        struct param* p = new param();
        p->port = port;
        p->rate = rate;
        p->dataControl = data;
        int newsockfd, portno, clilen;
        char buffer[1024];
        struct sockaddr_in serv_addr, cli_addr;
        int  n;

        /* First call to socket() function */
        sockfd = socket(AF_INET, SOCK_STREAM, 0);

        if (sockfd < 0) {
            perror("ERROR opening socket");
            exit(1);
        }

        /* Initialize socket structure */
        bzero((char *) &serv_addr, sizeof(serv_addr));
        portno = p->port;

        serv_addr.sin_family = AF_INET;
        serv_addr.sin_addr.s_addr = INADDR_ANY;
        serv_addr.sin_port = htons(portno);

        /* Now bind the host address using bind() call.*/
        if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
            perror("ERROR on binding");
            exit(1);
        }

        /* Now start listening for the clients, here process will
           * go in sleepComm mode and will wait for the incoming connection
        */


        listen(sockfd,5);
        clilen = sizeof(cli_addr);


        /* Accept actual connection from the client */
        newsockfd = accept(sockfd, (struct sockaddr *)&cli_addr, (socklen_t*)&clilen);

        if (newsockfd < 0) {
            perror("ERROR on accept");
            exit(1);
        }
        p->newsockfd = newsockfd;
        pthread_mutex_init(&mutex, nullptr);
        //create a thread
        p->m = mutex;
        pthread_create(&trid, nullptr, server, p);


    }

    int getSock() {
        return sockfd;
    }

    static void* server(void* args) {


        cout << "server" << endl;
        struct param* p = (struct param*) args;
        int n;
        char buffer[1024];


        /* If connection is established then start communicating */
        int i;
        int j = 0;
        while (true) {
            i = 0;
            while (i < p->rate) {
                usleep((1 / p->rate) * 1000000);
                bzero(buffer,1024);
                n = read(p->newsockfd,buffer, 1023);

                if (n < 0) {
                    perror("ERROR reading from socket");
                    exit(1);
                }
                pthread_mutex_lock(&p->m);
                setTheMap(buffer, p->dataControl);
                pthread_mutex_unlock(&p->m);
                //printf("Here is the message: %s\n",buffer);
                i++;

            }



        }
    }
    ~DataReaderServer() {
        pthread_mutex_destroy(&mutex);
        close(sockfd);
    }

private:

    static void setTheMap(char* buffer, DataControl* data) {
        char* temp = buffer;
        int i = 1;
        string value = "";
        char* last_comma = 0;
        while (*temp) {
            if (*temp == ',' || *temp == '\n') {
                data->getValues()[i] = stof(value);
                value = "";
                i++;
                if (*temp == '\n') {
                    break;
                }
            } else {
                value += *temp;
            }
            temp++;
        }
    }

};
#endif //PROJECT_DATAREADERSERVER_H
