#include "BigBurger.hpp"
#include <iostream>
using namespace std;

int main() {

    BigBurger a;

    cout << "Expecting: 11, recieved: " << a.maxWait({3,3,9}, {2,15,14}) << "\n";
    cout << "Expecting: 0, recieved: " << a.maxWait({182}, {11}) << "\n";
    cout << "Expecting: 3, recieved: " << a.maxWait({2,10,11}, {3,4,3}) << "\n";
    cout << "Expecting: 7, recieved: " << a.maxWait({2,10,12}, {15,1,15}) << "\n";

    return 0;
}