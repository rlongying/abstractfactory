//
// Created by Ivan on 2019-04-02.
//

#ifndef ABSTRACTFACTORY_MAZE_HPP
#define ABSTRACTFACTORY_MAZE_HPP

#include <iostream>
#include <vector>

#include "door.hpp"
#include "room.hpp"
#include "wall.hpp"

class maze {
protected:
    std::vector<door *> doors;
    std::vector<room *> rooms;
    std::vector<wall *> walls;

public:

    virtual void add_room(room *r);

    virtual void add_door(door *d);

    virtual void add_wall(wall *w);

    virtual ~ maze(){
        for(wall* w:walls){
            delete w;
        }

        for(room* r:rooms){
            delete r;
        }

        for(door* d:doors){
            delete d;
        }
    }

};

class enchanted_maze : public maze {
public:
    void add_room(room* r) override {
        rooms.push_back(r);
    }

    void add_door(door* d) override {

        doors.push_back(d);
    }

    void add_wall(wall* w) override {
        walls.push_back(w);
    }
};

class futuristic_maze : public maze {
public:
    void add_room(room* r) override {
        rooms.push_back(r);
    }

    void add_door(door* d) override {

        doors.push_back(d);
    }

    void add_wall(wall* w) override {
        walls.push_back(w);
    }
};

#endif //ABSTRACTFACTORY_MAZE_HPP
