//
// Created by Ivan on 2019-04-02.
//

#include "maze_game.hpp"

maze *maze_game::create_maze(maze_factory& factory) {
    maze* m = factory.make_maze();
    room* r1 = factory.make_room();
    room* r2 = factory.make_room();
    door* d = factory.make_door(*r1, *r2);
    wall* w = factory.make_wall();

    m->add_door(d);
    m->add_room(r1);
    m->add_room(r2);
    m->add_wall(w);

    return m;
}
