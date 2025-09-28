#ifndef CORPORATIONSALARY_HPP
#define CORPORATIONSALARY_HPP

#include <vector>
#include <string>
#include <iostream>
using namespace std;

class CorporationSalary{
    public:
    long totalSalary(vector<string> relations){
        int person = -1;
        int chosenSalary = -1;

        // set up salaries
        vector<int> salaries = {};
        for (int i = 0; i < relations.size(); i++){

            // if there are no people below, they have a salary of 1
            if (relations[i].find('Y') == string::npos){
                salaries.push_back(1);
            }

            // otherwise, it's 0 and will be added to
            else {
                salaries.push_back(0);
            }
        }
        
        while(1){
            person = -1;
            chosenSalary = -1;

            // loop through to find the next person who has a 'set' salary
            for (int i = 0; i < relations.size(); i++){
                if (relations[i].find('Y') == string::npos && relations[i] != "DONE"){
                    person = i;
                    chosenSalary = salaries[i];

                    relations[i] = "DONE";
                    break;
                }
            }

            if (person == -1){
                break;
            }

            // loop through and add that element to every salary
            for (int i = 0; i < relations.size(); i++){
                if (relations[i][person] == 'Y'){
                    salaries[i] += chosenSalary;
                    relations[i][person] = 'U';
                }
            }

            // cout << "\n";
            // for (int j = 0; j < salaries.size(); j++){
            //     cout << relations[j] << "\n";
            // }
            // cout << "\n";
            // for (int j = 0; j < salaries.size(); j++){
            //     cout << salaries[j] << "\n";
            // }
            // cout << "\n";

        }

        int total = 0;
        for (int i = 0; i < salaries.size(); i++){
            total += salaries[i];
        }

        return total;
    }
};

#endif