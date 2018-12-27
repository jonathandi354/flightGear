//
// Created by jonathan on 22/12/18.
//

#ifndef PROJECT_PRINT_H
#define PROJECT_PRINT_H

#include <iostream>
#include "Command.h"
#include "DataControl.h"
class print : public Command {
    DataControl* data;
public:
    print (DataControl* data) {
        this->data = data;
    }

    int execute(int index) {
        auto it = data->getArr().begin();

        for (int i = 0; i < index; i++) {
            ++it;
        }
        string s = *(it + 1);
        for (auto it1 = data->getSymbol().begin(); it1 != data->getSymbol().end(); it1++) {
            if (s.find(it1->first) != string::npos) {
                cout << data->calculate(*(it + 1)) << endl;
                return index + 1;
            }
        }
        int pos1 = s.find("\\n");
        int pos2 = s.find("\\t");
        for (int j = 0; j < s.length(); j++) {
            if (j == pos1) {
                cout<<'\n';
                j++;
            } else {
                if (j == pos2) {
                    cout << '\t';
                    j++;
                }
                cout<< s[j];
            }

        }
        return index + 1;
    }
};
#endif //PROJECT_PRINT_H
