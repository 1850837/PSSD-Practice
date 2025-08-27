#include "RunLengthEncoding.hpp"
using namespace std;

int main() {

    RunLengthEncoding a;

    cout << "Expecting: AAAABBBCDDE, recieved: " << a.decode("4A3BC2DE") << "\n";
    cout << "Expecting: ABCDE, recieved: " << a.decode("1A1B1C1D1E") << "\n";
    cout << "Expecting: AAAAAAAAABBBBCCCC, recieved: " << a.decode("1A3A5A4BCCCC") << "\n";
    cout << "Expecting: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA, recieved: " << a.decode("50A") << "\n";
    cout << "Expecting: TOO LONG, recieved: " << a.decode("21Z13S9A8M") << "\n";
    cout << "Expecting: TOO LONG, recieved: " << a.decode("123456789012345678901234567890B") << "\n";

    return 0;
}