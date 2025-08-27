#include "ChristmasTree.hpp"
#include <iostream>
using namespace std;

int main() {

    ChristmasTree a;

    cout << "Expecting: 0, recieved: " << a.decorationWays(1,0,0,0) << "\n";
    cout << "Expecting: 6, recieved: " << a.decorationWays(2,1,1,1) << "\n";
    cout << "Expecting: 3, recieved: " << a.decorationWays(2,2,1,0) << "\n";
    cout << "Expecting: 0, recieved: " << a.decorationWays(3,2,2,1) << "\n";
    cout << "Expecting: 36, recieved: " << a.decorationWays(3,2,2,2) << "\n";
    // cout << "Expecting: 197121, recieved: " << a.decorationWays(8,1,15,20) << "\n";

    // cout << "Unknown expectation. Pray. " << a.decorationWays(10,50,50,50) << "\n";

    return 0;
}