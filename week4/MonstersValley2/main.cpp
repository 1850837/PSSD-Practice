#include "MonstersValley2.hpp"
#include <iostream>
using namespace std;

int main(){

    MonstersValley2 a;

    cout << "Expecting 2, recieved: " << a.minimumPrice({8, 5, 10}, {1, 1, 2}) << "\n";
    cout << "Expecting 5, recieved: " << a.minimumPrice({1, 2, 4, 1000000000}, {1, 1, 1, 2}) << "\n";
    cout << "Expecting 2, recieved: " << a.minimumPrice({200, 107, 105, 206, 307, 400}, {1, 2, 1, 1, 1, 2}) << "\n";
    cout << "Expecting 5, recieved: " << a.minimumPrice({5216, 12512, 613, 1256, 66, 17202, 30000, 23512, 2125, 33333}, {2, 2, 1, 1, 1, 1, 2, 1, 2, 1}) << "\n";
    cout << "Expecting 2, recieved: " << a.minimumPrice({1999999991, 1999999992, 1999999993, 1999999994, 1999999995, 1999999996, 1999999997, 1999999998, 1999999999, 2000000000}, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}) << "\n";

    return 0;
}