//
// Created by jonathan on 18/12/18.
//
//

#ifndef PROJECT_CONNECT_H
#define PROJECT_CONNECT_H

#include "Command.h"
#include "DataControl.h"
#include <stdio.h>
#include <stdlib.h>

#include <netdb.h>
#include <unistd.h>
#include <netinet/in.h>

#include <string.h>
#include <netinet/tcp.h>
#include <sys/socket.h>
#include <iostream>

class Connect : public Command {
    DataControl* data;
    int sockfd;

public:
    Connect(DataControl* data) {
        this->data = data;
        sockfd = -1;
    }
    int getSock() {
        return sockfd;
    }

    virtual int execute(int index) {
        auto it = data->getArr().begin();
        for (int i = 0; i < index; i++) {
            it++;
        }
        string ip = *(++it);
        int port = data->calculate((*++it));
        //
        const char* ip2 = ip.c_str();
        //create connection
        create_Connection(port, ip2);
        return index + 1;


    }

    char* send(const char* msg) {
        int n;
        int flag = 1;
        char *msg1 = new char[strlen(msg) + 3];
        strcpy(msg1, msg);
        strcat(msg1, "\r\n");
        //cout << msg1 << endl;
        ssize_t t = strlen(msg1);

        //send the message
        n = static_cast<int>(::write(sockfd, msg1, t));
        delete[] msg1;



        if (n < 0) {
            perror("ERROR writing to socket");
            exit(1);
        }
        /* Now read server response */
        char buffer[256];
        bzero(buffer,256);
        n = read(sockfd, buffer, 255);
        cout << buffer << endl;

        if (n < 0) {
            perror("ERROR reading from socket");
            exit(1);
        }


    }
    ~Connect() {
        close(sockfd);
    }

private:
    void create_Connection(int port,const char* ip) {
        int portno, n;
        struct sockaddr_in serv_addr;
        struct hostent *server;

        char buffer[256];

        portno = port;

        /* Create a socket point */
        sockfd = socket(AF_INET, SOCK_STREAM, 0);

        if (sockfd < 0) {
            perror("ERROR opening socket");
            exit(1);
        }

        server = gethostbyname(ip);

        if (server == nullptr) {
            perror("ERROR, no such host\n");
            exit(0);
        }

        bzero((char *) &serv_addr, sizeof(serv_addr));
        serv_addr.sin_family = AF_INET;
        bcopy((char *)server->h_addr, (char *)&serv_addr.sin_addr.s_addr, server->h_length);
        serv_addr.sin_port = htons(portno);

        /* Now connect to the server */
        if (connect(sockfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) < 0) {
            perror("ERROR connecting");
            exit(1);
        }


    }



};
#endif //PROJECT_CONNECT_H
