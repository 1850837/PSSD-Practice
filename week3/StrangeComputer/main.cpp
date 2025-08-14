#include "StrangeComputer.hpp"
#include <iostream>

using namespace std;

int main() {

    StrangeComputer a;

    cout << "Expecting: 1, recieved: " << a.setMemory("0011") << "\n";
    cout << "Expecting: 0, recieved: " << a.setMemory("000") << "\n";
    cout << "Expecting: 2, recieved: " << a.setMemory("0100") << "\n";
    cout << "Expecting: 3, recieved: " << a.setMemory("111000111") << "\n";

    return 0;
}