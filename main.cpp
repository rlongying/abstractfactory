#include <iostream>
#include "door.hpp"

using namespace std;
int main() {

    room* r1 = new futuristic_room();
    room* r2 = new futuristic_room();
    room* r3 = new enchanted_room();
    room* r4 = new enchanted_room();

    door *d1 = new futuristic_door(r1, r2);
    d1->print();
    cout << endl;
    d1 = new enchanted_door(r3, r4);
    d1->print();



    return 0;
}