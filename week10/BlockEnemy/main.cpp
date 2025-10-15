#include "BlockEnemy.hpp"
#include <iostream>
using namespace std;

int main() {

    BlockEnemy a;

    cout << "Expecting: 4, recieved: " << a.minEffort(5, {"1 0 1", "1 2 2", "0 3 3", "4 0 4"}, {3, 2, 4}) << "\n";
    cout << "Expecting: 0, recieved: " << a.minEffort(5, {"1 0 1", "1 2 2", "0 3 3", "4 0 4"}, {3}) << "\n";
    cout << "Expecting: 13, recieved: " << a.minEffort(12, {"0 1 3", "2 0 5", "1 3 1", "1 4 8", "1 5 4", "2 6 2",
 "4 7 11", "4 8 10", "6 9 7", "6 10 9", "6 11 6"}, {1, 2, 6, 8}) << "\n";
    cout << "Expecting: 66, recieved: " << a.minEffort(12, {"0 1 3", "2 0 5", "1 3 1", "1 4 8", "1 5 4", "2 6 2",
 "4 7 11", "4 8 10", "6 9 7", "6 10 9", "6 11 6"}, {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}) << "\n";

    return 0;
}