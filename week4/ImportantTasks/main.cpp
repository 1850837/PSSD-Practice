#include "ImportantTasks.hpp"

int main(){

    ImportantTasks a;

    cout << "Expecting: 2, recieved: " << a.maximalCost({1,2,3}, {2,2,2}) << "\n";
    cout << "Expecting: 1, recieved: " << a.maximalCost({1,2,3}, {3}) << "\n";
    cout << "Expecting: 3, recieved: " << a.maximalCost({3,5,1,7}, {9,4,1,1,1}) << "\n";
    cout << "Expecting: 8, recieved: " << a.maximalCost({5,2,7,8,6,4,2,10,2,3}, {4,1,3,6,2,10,11,1,1,3,4,2}) << "\n";
    cout << "Expecting: 1, recieved: " << a.maximalCost({100}, {100,100});

    return 0;
}