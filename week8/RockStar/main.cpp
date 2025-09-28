#include "RockStar.hpp"
#include <iostream>

using namespace std;

int main() {

    RockStar a;

    cout << "Expecting: 100, recieved: " << a.getNumSongs(100,0,0,200) << "\n";
    cout << "Expecting: 201, recieved: " << a.getNumSongs(0,0,20,200) << "\n";
    cout << "Expecting: 5, recieved: " << a.getNumSongs(1,2,1,1) << "\n";
    cout << "Expecting: 999, recieved: " << a.getNumSongs(192,279,971,249) << "\n";

    return 0;
}