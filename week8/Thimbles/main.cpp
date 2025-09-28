#include "Thimbles.hpp"
#include <iostream>
using namespace std;

int main() {
    Thimbles a;

    cout << "Expecting: 2, recieved: " << a.thimbleWithBall({"1-2", "3-1"}) << "\n";
    cout << "Expecting: 3, recieved: " << a.thimbleWithBall({"3-1", "2-3", "3-1", "3-2"}) << "\n";
    cout << "Expecting: 3, recieved: " << a.thimbleWithBall({"2-3", "1-3", "2-3", "2-1", "3-1"}) << "\n";
    cout << "Expecting: 1, recieved: " << a.thimbleWithBall({"1-2", "3-2", "1-2", "2-1", "2-1", "3-2", "1-3", "3-1", "1-2"}) << "\n";

    return 0;
}