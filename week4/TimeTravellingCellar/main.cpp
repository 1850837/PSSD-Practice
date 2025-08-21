#include "TimeTravellingCellar.hpp"
#include <iostream>
using namespace std;

int main() {

    TimeTravellingCellar a;

    cout << "Expecting 2, recieved: " << a.determineProfit({1,2,3}, {3,1,2}) << "\n";
    cout << "Expecting 1, recieved: " << a.determineProfit({3,2}, {1,2}) << "\n";
    cout << "Expecting 2, recieved: " << a.determineProfit({3,3,3}, {1,1,1}) << "\n";
    cout << "Expecting 992, recieved: " << a.determineProfit({1000,500,250,125}, {64,32,16,8}) << "\n";

    return 0;
}