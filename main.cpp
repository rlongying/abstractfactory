#include <iostream>
#include "maze_factory.hpp"
#include "maze_game.hpp"

using namespace std;

int main() {

//    room* r1 = new futuristic_room();
//    room* r2 = new futuristic_room();
//    room* r3 = new enchanted_room();
//    room* r4 = new enchanted_room();
//
//    door *d1 = new futuristic_door(r1, r2);
//    d1->print();
//    cout << endl;
//    d1 = new enchanted_door(r3, r4);
//    d1->print();

    maze_game game;
    maze_factory *enchanted = new enchanted_maze_factory();
    maze_factory *futuristic = new futuristic_maze_factory();
    maze *m1 = game.create_maze(*enchanted);
    m1->print();
    delete m1;

    cout << "********************" << endl;
    maze *m2 = game.create_maze(*futuristic);
    m2->print();
    delete m2;
    return 0;
}