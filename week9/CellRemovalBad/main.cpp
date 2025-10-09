#include "CellRemoval.hpp"
#include <iostream>
using namespace std;

int main() {

    CellRemoval a;

    cout << "Expecting: 2, recieved: " << a.cellsLeft({-1,0,0,1,1}, 2) << "\n";
    cout << "Expecting: 1, recieved: " << a.cellsLeft({-1,0,0,1,1}, 1) << "\n";
    cout << "Expecting: 0, recieved: " << a.cellsLeft({-1,0,0,1,1}, 0) << "\n";
    cout << "Expecting: 2, recieved: " << a.cellsLeft({-1,0,0,2,2,4,4,6,6}, 4) << "\n";
    cout << "Expecting: 14, recieved: " << a.cellsLeft({26,2,32,36,40,19,43,24,30,13,21,14,24,21,19,4,30,10,44,12,7,32,17,43,
 35,18,7,36,10,16,5,38,35,4,13,-1,16,26,1,12,2,5,18,40,1,17,38,44,14}, 24) << "\n";

    return 0;
}