#ifndef PARTYSEATS_HPP
#define PARTYSEATS_HPP

#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class PartySeats{
    public:
    vector<string> seating(vector<string> attendees){
        vector<string> result = {};

        //check if there are enough people at all
        if (attendees.size() < 4){
            return result;
        }

        //check if the number of attendees is divisible by 4
        if (attendees.size() % 4 != 0){
            return result;
        }

        //creating the girls and boys vectors
        vector<string> boys = {};
        vector<string> girls = {};

        for (int i = 0; i < attendees.size(); i++){
            int pos = attendees[i].find(' ');
            
            string name = attendees[i].substr(0, pos);
            string gender = attendees[i].substr(pos + 1);

            if (gender == "boy"){
                boys.push_back(name);
            }
            else {
                girls.push_back(name);
            }
        }

        //sort alphabetically
        sort(boys.begin(), boys.end());
        sort(girls.begin(), girls.end());

        //checking that there are the same amount of boys and girls
        if (boys.size() != girls.size()){
            return result;
        }

        //creating the final vector
        result.push_back("HOST");
        for (int i = 0; i < (girls.size()/2); i++){
            result.push_back(girls[i]);
            result.push_back(boys[i]);
        }
        result.push_back("HOSTESS");
        for (int i = girls.size()/2; i < girls.size(); i++){
            result.push_back(boys[i]);
            result.push_back(girls[i]);
        }

        return result;
    }
};

#endif