#include "PartySeats.hpp"
#include <iostream>
using namespace std;

int main() {

    PartySeats a;

    vector<string> b = a.seating({"BOB boy","SAM girl","DAVE boy","JO girl"});
    cout << "Expecting: {HOST, JO, BOB, HOSTESS, DAVE, SAM}, recieved: {";
    for (int i = 0; i < b.size(); i++){
            cout << b[i] << " ";
        }
    cout << "}\n";

    b = a.seating({"JOHN boy"});
    cout << "Expecting: { }, recieved: {";
    for (int i = 0; i < b.size(); i++){
            cout << b[i] << " ";
        }
    cout << "}\n";

    b = a.seating({"JOHN boy","CARLA girl"});
    cout << "Expecting: { }, recieved: {";
    for (int i = 0; i < b.size(); i++){
            cout << b[i] << " ";
        }
    cout << "}\n";

    b = a.seating({"BOB boy","SUZIE girl","DAVE boy","JO girl","AL boy","BOB boy","CARLA girl","DEBBIE girl"});
    cout << "Expecting: {HOST, CARLA, AL, DEBBIE, BOB, HOSTESS, BOB, JO, DAVE, SUZIE}, recieved: ";
    for (int i = 0; i < b.size(); i++){
            cout << b[i] << " ";
        }
    cout << "}\n";

    return 0;
}