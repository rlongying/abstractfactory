//
// Created by Ivan on 2019-04-02.
//

#include "maze_game.hpp"

maze *maze_game::create_maze(maze_factory& factory) {
    maze* m = factory.make_maze();
    room* r = factory.make_room();
    room* r2 = factory.make_room();
    door* d = factory.make_door(*r, *r2);



    return m;
}
