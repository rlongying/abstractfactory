//
// Created by Ivan on 2019-04-02.
//

#ifndef ABSTRACTFACTORY_WALL_HPP
#define ABSTRACTFACTORY_WALL_HPP

#include <iostream>
using namespace std;

class wall {

public:
    virtual void print() = 0;

};

class enchanted_wall : public wall {
public:
    void print() override {
        cout << "enchanted wall";
    }
};

class futuristic_wall : public wall {
public:
    void print() override {
        cout << "futuristic wall";
    }
};
#endif //ABSTRACTFACTORY_WALL_HPP
