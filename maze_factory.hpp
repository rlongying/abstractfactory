//
// Created by Ivan on 2019-04-02.
//

#ifndef ABSTRACTFACTORY_MAZE_FACTORY_HPP
#define ABSTRACTFACTORY_MAZE_FACTORY_HPP


class maze_factory {

public:

    virtual maze* make_maze(maze_factory& factory) = 0;
    virtual room* make_room(maze_factory& factory) = 0;
    virtual wall* make_wall(maze_factory& factory) = 0;
    virtual door* make_door(room& r1, room& r2) = 0;

};


#endif //ABSTRACTFACTORY_MAZE_FACTORY_HPP
