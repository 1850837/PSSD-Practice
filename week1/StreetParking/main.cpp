#include "StreetParking.hpp"
#include <iostream>

using namespace std;

int main() {
    StreetParking a;

    cout << "Street: '---B--S-D--S--', expecting: 4, result: " << a.freeParks("---B--S-D--S--") << "\n";
    cout << "Street: 'DDBDDBDDBDD', expecting: 0, result: " << a.freeParks("DDBDDBDDBDD") << "\n";
    cout << "Street: '--S--S--S--S--', expecting: 2, result: " << a.freeParks("--S--S--S--S--") << "\n";
    cout << "Street: 'SSD-B---BD-DDSB-----S-S--------S-B----BSB-S--B-S-D', expecting: 14, result: " << a.freeParks("SSD-B---BD-DDSB-----S-S--------S-B----BSB-S--B-S-D") << "\n";

    return 0;
}