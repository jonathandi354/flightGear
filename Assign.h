//
// Created by jonathan on 20/12/18.
//

#ifndef PROJECT_ASSIGN_H
#define PROJECT_ASSIGN_H

#include "Command.h"
#include "Connect.h"
#include "DataControl.h"
class Assign : public Command {
    DataControl* data;
    map <string, int> places;
    Connect* connect;

public:
    Assign(DataControl* data, Connect* connect) {
        this->data = data;
        places = data->getPlaces();
        this->connect = connect;
    }

    virtual int execute(int index) {
        auto it = data->getArr().begin();
        string path;
        string request = "";
        float value;
        for (int i = 0; i < index; i++) {
            ++it;
        }
        if (*(it + 1) == "bind") {
            path = *(it + 2);
            if (places.count(path) == 1) {
                data->getSymbol()[*(it - 1)] = data->getValues()[places[path]];


            } else {
                if (data->getSymbol().count(path) == 1) {
                    data->getSymbol()[*(it - 1)] = data->getSymbol()[path];
                    data->getBinded()[path] = *(it - 1);
                }
            }
            data->getBinded()[*(it - 1)] = path;
        } else {

            value = data->calculate(*(it + 1));
            if (data->getBinded().count(*(it - 1)) == 1) {
                change(value, *(it - 1));
            } else {
                data->getSymbol()[*(it - 1)] = value;
            }
        }
        return index + 1;
    }
private:
    void change(float value, string var) {
        string request = "";
        string val = to_string(value);
        string path = data->getBinded()[var];


        if (data->getSymbol().count(path) == 1) {
            data->getSymbol()[var] = value;
            data->getSymbol()[path] = value;

            if (data->getBinded().count(path) && data->getBinded()[path] != var) {
                change(value, path);
            }

        } else {
            request += "set " + path + " " + val;
            connect->send(request.c_str());
            data->getSymbol()[var] = value;
        }
        return;
    }


};


#endif //PROJECT_ASSIGN_H
