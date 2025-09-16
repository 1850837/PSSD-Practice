#include "ColorfulRabbits.hpp"
#include <iostream>

int main() {

    ColorfulRabbits a;

    cout << "Expecting: 5, recieved: " << a.getMinimum({1,1,2,2}) << "\n";
    cout << "Expecting: 1, recieved: " << a.getMinimum({0}) << "\n";
    cout << "Expecting: 499, recieved: " << a.getMinimum({2,2,44,2,2,2,444,2,2}) << "\n";

    return 0;
}