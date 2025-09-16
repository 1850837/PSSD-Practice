#include "GoodHours.hpp"

int main(){
    
    GoodHours a;

    cout << "Expecting: 1, recieved: " << a.howMany("11:11","11:11") << "\n";
    cout << "Expecting: 164, recieved: " << a.howMany("00:56","12:32") << "\n";
    cout << "Expecting: 60, recieved: " << a.howMany("00:00","00:59") << "\n";
    cout << "Expecting: 2, recieved: " << a.howMany("10:10","10:20") << "\n";
    cout << "Expecting: 75, recieved: " << a.howMany("23:10","01:23") << "\n";

    return 0;
}