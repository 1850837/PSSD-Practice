#include "VeryInterestingMovie.hpp"
#include <iostream>
using namespace std;

int main() {

    VeryInterestingMovie a;

    cout << "Expecting: 3, recieved: " << a.maximumPupils({"YY","YY","YY"}) << "\n";
    cout << "Expecting: 0, recieved: " << a.maximumPupils({"NNNNN","NNNNN","NNNNN","NNNNN","NNNNN"}) << "\n";
    cout << "Expecting: 22, recieved: " << a.maximumPupils({"YYYYYYN","YYYYNYY","NYYYNYY","NYYYYYN","YYYYYYN","NYYNYNY","YYYYYYY"}) << "\n";

    return 0;
}