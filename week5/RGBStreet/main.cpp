#include "RGBStreet.hpp"
using namespace std;

int main() {

    RGBStreet a;

    cout << "Expecting: 3, recieved: " << a.estimateCost({"1 100 100", "100 1 100", "100 100 1"}) << "\n";
    cout << "Expecting: 102, recieved: " << a.estimateCost({"1 100 100", "100 100 100", "1 100 100"}) << "\n";
    cout << "Expecting: 96, recieved: " << a.estimateCost({"26 40 83", "49 60 57", "13 89 99"}) << "\n";
    cout << "Expecting: 208, recieved: " << a.estimateCost({"30 19 5", "64 77 64", "15 19 97", "4 71 57", "90 86 84", "93 32 91"}) << "\n";
    cout << "Expecting: 253, recieved: " << a.estimateCost({"71 39 44", "32 83 55", "51 37 63", "89 29 100", 
 "83 58 11", "65 13 15", "47 25 29", "60 66 19"}) << "\n";

    return 0;
}