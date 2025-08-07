#include "AlternateColors.hpp"
#include <iostream>

using namespace std;

int main(){

    AlternateColors a;

    cout << "Expecting: BLUE, recieved: " << a.getColor(1,1,1,3) << "\n";
    cout << "Expecting: RED, recieved: " << a.getColor(3,4,5,4) << "\n";
    cout << "Expecting: GREEN, recieved: " << a.getColor(7,7,1,7) << "\n";
    cout << "Expecting: RED, recieved: " << a.getColor(1000000000000,1,1,1000000000002) << "\n";
    cout << "Expecting: BLUE: recieved: " << a.getColor(653,32,1230,556) << "\n";

    return 0;
}