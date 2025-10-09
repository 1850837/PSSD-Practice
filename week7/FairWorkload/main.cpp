#include "FairWorkload.hpp"
#include <iostream>
using namespace std;

int main() {

    FairWorkload a;

    // cout << "Expecting: 170, recieved: " << a.getMostWork({ 10, 20, 30, 40, 50, 60, 70, 80, 90 }, 3) << "\n";
    // cout << "Expecting: 110, recieved: " << a.getMostWork({ 10, 20, 30, 40, 50, 60, 70, 80, 90 }, 5) << "\n";
    // cout << "Expecting: 1785, recieved: " << a.getMostWork({ 568, 712, 412, 231, 241, 393, 865, 287, 128, 457, 238, 98, 980, 23, 782 }, 4) << "\n";
    // cout << "Expecting: 1000, recieved: " << a.getMostWork({ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000 }, 2) << "\n";
    // cout << "Expecting: 200, recieved: " << a.getMostWork({ 50, 50, 50, 50, 50, 50, 50 }, 2) << "\n";
    // cout << "Expecting: 100, recieved: " << a.getMostWork({1,1,1,1,100}, 5) << "\n";
    // cout << "Expecting: 950, recieved: " << a.getMostWork({ 950, 650, 250, 250, 350, 100, 650, 150, 150, 700 }, 6) << "\n";
    cout << "Expecting: 1020, recieved: " << a.getMostWork({689, 516, 776, 244, 991, 797}, 5) << "\n";

    return 0;
}