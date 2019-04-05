//
// Created by Ivan on 2019-04-02.
//

#ifndef ABSTRACTFACTORY_DOOR_HPP
#define ABSTRACTFACTORY_DOOR_HPP

#include <iostream>
#include "room.hpp"

using namespace std;

class door {
protected:
    room *r1;
    room *r2;

    door(room *r1, room *r2) : r1(r1), r2(r2) {}

public:
    virtual void print() = 0;

};


class enchanted_door : public door {
public:
    enchanted_door(room *r1, room *r2) : door(r1, r2) {}

    void print() override {
        cout << "enchanted door, connecting: ";
        r1->print();
        cout << " with ";
        r2->print();
    };
};

class futuristic_door : public door {
public:
    futuristic_door(room *r1, room *r2) : door(r1, r2) {}

    void print() override {
        cout << "futuristic door, connecting: ";
        r1->print();
        cout << " with ";
        r2->print();
    };
};


#endif //ABSTRACTFACTORY_DOOR_HPP
