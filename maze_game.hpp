//
// Created by Ivan on 2019-04-02.
//

#ifndef ABSTRACTFACTORY_MAZE_GAME_HPP
#define ABSTRACTFACTORY_MAZE_GAME_HPP

#include "maze_factory.hpp"

class maze_game {

public:
    maze* create_maze(maze_factory& factory);

};


#endif //ABSTRACTFACTORY_MAZE_GAME_HPP
