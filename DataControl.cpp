//
// Created by jonathan on 23/12/18.
//

#include "DataControl.h"
double DataControl::calculate(string str) {
    //calculate the value of str
    string s = str;
    string from;
    string to;
    string newS;
    string::size_type lastPos = 0;
    string::size_type findPos;
    //place the values of the variables in str
    for (auto it = symbols.begin(); it != symbols.end(); it++) {
        lastPos = 0;
        from = it->first;
        to = to_string(getValueOfVar(it->first));
        newS.reserve(s.length());
        while((findPos = s.find(from, lastPos)) != string::npos) {
            newS.append(s, lastPos, findPos-lastPos);
            newS += to;
            lastPos = findPos + from.length();
        }
        newS += s.substr(lastPos);
        s.swap(newS);
        newS = "";
    }


    return 0;
}

double DataControl::getValueOfVar(string var) {
    //get the current value of var
    if (binded.count(var) == 1) {
        if (symbols.count(binded[var]) == 1) {
            return getValueOfVar(binded[var]);
        } else {
            return values[places[binded[var]]];
        }
    }
    return symbols[var];
}
void DataControl::setMap() {
    //set the map that maps each path in the xml file into an int.
    places["/instrumentation/airspeed-indicator/indicated-speed-kt"] = 1;
    places["/instrumentation/altimeter/indicated-altitude-ft"] = 2;
    places["/instrumentation/altimeter/pressure-alt-ft"] = 3;
    places["/instrumentation/attitude-indicator/indicated-pitch-deg"] = 4;
    places["/instrumentation/attitude-indicator/indicated-roll-deg"] = 5;
    places["/instrumentation/attitude-indicator/internal-pitch-deg"] = 6;
    places["/instrumentation/attitude-indicator/internal-roll-deg"] = 7;
    places["/instrumentation/encoder/indicated-altitude-ft"] = 8;
    places["/instrumentation/encoder/pressure-alt-ft"] = 9;
    places["/instrumentation/gps/indicated-altitude-ft"] = 10;
    places["/instrumentation/gps/indicated-ground-speed-kt"] = 11;
    places["/instrumentation/gps/indicated-vertical-speed"] = 12;
    places["/instrumentation/heading-indicator/indicated-heading-deg"] = 13;
    places["/instrumentation/magnetic-compass/indicated-heading-deg"] = 14;
    places["/instrumentation/slip-skid-ball/indicated-slip-skid"] = 15;
    places["/instrumentation/turn-indicator/indicated-turn-rate"] = 16;
    places["/instrumentation/vertical-speed-indicator/indicated-speed-fpm"] = 17;
    places["/controls/flight/aileron"] = 18;
    places["/controls/flight/elevator"] = 19;
    places["/controls/flight/rudder"] = 20;
    places["/controls/flight/flaps"] = 21;
    places["/controls/engines/current-engine/throttle"] = 22;
    places["/engines/engine/rpm"] = 23;

}