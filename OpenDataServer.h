//
// Created by jonat on 12/16/2018.
//

#ifndef PROJECT_OPENDATASERVER_H
#define PROJECT_OPENDATASERVER_H

#include "DataControl.h"
#include "DataReaderServer.h"
#include <iostream>
#include <pthread.h>
#include <chrono>
using namespace std;
using namespace std::chrono_literals;
/*struct param {
    int port;
    int rate;
    DataControl* dataControl;
};*/
class OpenDataServer : public Command{
    DataControl* data;
    DataReaderServer* reader;
public:
    OpenDataServer(DataControl* data) {
        this->data = data;
    }

    virtual int execute(int index) {
        auto it = data->getArr().begin();
        for (int i = 0; i < index; i++) {
            it++;
        }
        int port = data->calculate(*(++it));
        int rate = data->calculate(*(++it));
        /*int port = stoi(*(++it));
        int rate = stoi(*(++it));*/

        struct param* p = new param();
        //p->port = port;
        //p->rate = rate;
        //p->dataControl = data;

        reader = new DataReaderServer(port, rate, data);


        return index + 1;
    }
    ~OpenDataServer() {
        delete  reader;
    }






};
#endif //PROJECT_OPENDATASERVER_H
