#include "HandsShaking.hpp"
#include <iostream>

using namespace std;

int main() {

    HandsShaking a;

    // cout << "Expecting: 1, recieved: " << a.countPerfect(2) << "\n";
    // cout << "Expecting: 2, recieved: " << a.countPerfect(4) << "\n";
    // cout << "Expecting: 5, recieved: " << a.countPerfect(6) << "\n";
    // cout << "Expecting: 14, recieved: " << a.countPerfect(8) << "\n";
    // cout << "Expecting: 42, recieved: " << a.countPerfect(10) << "\n";
    // cout << "Expecting: 132, recieved: " << a.countPerfect(12) << "\n";
    // cout << "Expecting: 429, recieved: " << a.countPerfect(14) << "\n";
    // cout << "Expecting: 1430, recieved: " << a.countPerfect(16) << "\n";
    cout << a.countPerfect(46) << "\n";
    cout << a.countPerfect(48) << "\n";
    cout << a.countPerfect(50) << "\n";

    return 0;
}