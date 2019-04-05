//
// Created by Ivan on 2019-04-02.
//

#ifndef ABSTRACTFACTORY_ROOM_HPP
#define ABSTRACTFACTORY_ROOM_HPP

#include <iostream>

using namespace std;

class room {
protected:
    static int room_id;
public:

    virtual void print() = 0;
};




class futuristic_room : public room {
private:

    int id;
public:
    futuristic_room() {
        room_id++;
        id = room_id;
    }

    void print() override {
        cout << "futuristic room " << id << " ";
    }
};

class enchanted_room : public room {
private:

    int id;
public:
    enchanted_room() {
        room_id++;
        id = room_id;
    }

    void print() override {
        cout << "enchanted room " << id << " ";
    }
};



#endif //ABSTRACTFACTORY_ROOM_HPP
