#include <iostream>
#include "CatGame.hpp"
using namespace std;

int main() {

    CatGame a;

    cout << "Expecting: 3, recieved: " << a.getNumber({-3,0,1}, 3) << "\n";
    cout << "Expecting: 4, recieved: " << a.getNumber({4,7,-7}, 5) << "\n";
    cout << "Expecting: 0, recieved: " << a.getNumber({-100000000, 100000000}, 100000000) << "\n";
    cout << "Expecting: 7, recieved: " << a.getNumber({3, 7, 4, 6, -10, 7, 10, 9, -5}, 7) << "\n";
    cout << "Expecting: 4, recieved: " << a.getNumber({-4, 0, 4, 0}, 4) << "\n";
    cout << "Expecting: 0, recieved: " << a.getNumber({7}, 0) << "\n";
    cout << "Expecting: 1416, recieved: " << a.getNumber({527, -168, 795, 113, 319, 24, 613, 661, -829, 763, 737, 
        541, -717, 981, -12, 512, 898, -87, 73, -968, -553, 880, 228, -586, -265, -211, -3, -252, -941, 491, -967,
        -766, -616, 253, -629, 293, 428, 744, -778, -203, -321, 222}, 824) << "\n";

    return 0;
}