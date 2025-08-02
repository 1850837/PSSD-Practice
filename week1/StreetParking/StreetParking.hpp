#ifndef STREETPARKING_HPP
#define STREETPARKING_HPP

#include <string>
using namespace std;

class StreetParking {
    public:
    int freeParks(string street){
        int sum = 0;
        int conditionsMet = 0;

        for (int i = 0; i < street.size(); i++){
            if (street[i] == '-'){                                      //conditions 1, 2 and 5
                conditionsMet++;
            }

            if (i + 1 >= street.size()){
                conditionsMet++;
            }
            else if (street[i + 1] == 'D' || street[i + 1] == '-'){     //conditions 3 and 6
                conditionsMet++;
            }

            if (i + 2 >= street.size()){
                conditionsMet++;
            }
            else if (street[i + 2] != 'B'){                             //condition 4
                conditionsMet++;
            }

            if (i - 1 < 0){
                conditionsMet++;
            }
            else if (street[i - 1] != 'S'){                             //condition 7
                conditionsMet++;
            }

            if (conditionsMet == 4){
                sum++;
            }

            conditionsMet = 0;
        }

        return sum;
    }
};

#endif