#include "ExerciseMachine.hpp"

int main(){
    ExerciseMachine a;
    
    cout << "Expecting: 99, recieved: " << a.getPercentages("00:30:00") << "\n";
    cout << "Expecting: 19, recieved: " << a.getPercentages("00:28:00") << "\n";
    cout << "Expecting: 0, recieved: " << a.getPercentages("23:59:59") << "\n";
    cout << "Expecting: 49, recieved: " << a.getPercentages("00:14:10") << "\n";
    cout << "Expecting: 3, recieved: " << a.getPercentages("00:19:16") << "\n";

    return 0;
}