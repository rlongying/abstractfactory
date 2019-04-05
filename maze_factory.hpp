//
// Created by Ivan on 2019-04-02.
//

#ifndef ABSTRACTFACTORY_MAZE_FACTORY_HPP
#define ABSTRACTFACTORY_MAZE_FACTORY_HPP

#include "maze.hpp"

class maze_factory {

public:

    virtual maze* make_maze() = 0;
    virtual room* make_room() = 0;
    virtual wall* make_wall() = 0;
    virtual door* make_door(room& r1, room& r2) = 0;

};


class futuristic_maze_factory : public maze_factory{

public:
    maze *make_maze() override {
        return new futuristic_maze{};
    }

    room *make_room() override {
        return new futuristic_room{};
    }

    wall *make_wall() override {
        return new futuristic_wall();
    }

    door *make_door(room &r1, room &r2) override {
        return new futuristic_door(&r1, &r2);
    }
};

class enchanted_maze_factory : public maze_factory {

public:
    maze *make_maze() override {
        return new enchanted_maze();
    }

    room *make_room() override {
        return new enchanted_room();
    }

    wall *make_wall() override {
        return new enchanted_wall();
    }

    door *make_door(room &r1, room &r2) override {
        return new enchanted_door(&r1, &r2);
    }
};


#endif //ABSTRACTFACTORY_MAZE_FACTORY_HPP
