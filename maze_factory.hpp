//
// Created by Ivan on 2019-04-02.
//

#ifndef ABSTRACTFACTORY_MAZE_FACTORY_HPP
#define ABSTRACTFACTORY_MAZE_FACTORY_HPP

class maze;
class room;
class wall;
class door;

class maze_factory {

public:

    virtual maze* make_maze() = 0;
    virtual room* make_room() = 0;
    virtual wall* make_wall() = 0;
    virtual door* make_door(room& r1, room& r2) = 0;

};


class futuristic_maze_factory : public maze_factory{

};

class enchanted_maze_factory : public maze_factory {

public:
    room* make_room() override{
    }
};


#endif //ABSTRACTFACTORY_MAZE_FACTORY_HPP
