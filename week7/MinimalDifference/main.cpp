#include "MinimumDifference.hpp"

using namespace std;

int main(){

    MinimumDifference a;

    cout << "Expecting: 1, recieved: " << a.findNumber(1,9,10) << "\n";
    cout << "Expecting: 11, received: " << a.findNumber(11,20,20) << "\n";
    cout << "Expecting: 1, received: " << a.findNumber(1,1,999) << "\n";
    cout << "Expecting: 189, recieved: " << a.findNumber(100,1000,99) << "\n";
    cout << "Expecting: 2000, recieved: " << a.findNumber(1987, 9123, 1) << "\n";

    return 0;
}