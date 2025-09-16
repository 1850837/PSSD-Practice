#include "NiceOrUgly.hpp"
#include <iostream>
using namespace std;

int main(){

    NiceOrUgly a;

    cout << "Expecting: NICE, recieved: " << a.describe("HELLOWORLD") << "\n";
    cout << "Expecting: UGLY, recieved: " << a.describe("ABCDEFGHIJKLMNOPQRSTUVWXYZ") << "\n";
    cout << "Expecting: 42, recieved: " << a.describe("HELLOW?RLD") << "\n";
    cout << "Expecting: NICE, recieved: " << a.describe("H??LOWOR??") << "\n";
    cout << "Expecting: UGLY, recieved: " << a.describe("EE?FFFF") << "\n";
    cout << "Expecting: UGLY, recieved: " << a.describe("IE?LPS?E?QCL?I?VRV?A?MPD?I?BHR?O?SFJ?E?MFG?I?CHYW") << "\n";
    cout << "Expecting: 42, recieved: " << a.describe("EI?RQQ?A?WWQ?I?QRQ?A?QRQ?I?WQR?A?RWR?E?WQR?E?QRR") << "\n";
    cout << "Expecting: 42, recieved: " << a.describe("B?B?B") << "\n";

    return 0;
}