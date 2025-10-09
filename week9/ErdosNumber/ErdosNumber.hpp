#ifndef ERDOSNUMBER_HPP
#define ERDOSNUMBER_HPP

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class ErdosNumber {
    public:
    vector<string> calculateNumbers(vector<string> publications){
        vector<string> authsAndNums = {"ERDOS 0"};
        vector<string> auths = {"ERDOS"};
        string currentAuth = "ERDOS";
        int currentNum = 0;
        int counter = 0;
        int p = 0;
        vector<string> currentAuthors;
        string current;
        bool found = false;

        // for (int j = 0; j < publications.size(); j++){
        //     cout << publications[j] << ", ";
        // } cout << "\n";

        while (counter < publications.size() && p < authsAndNums.size()){

            // cout << "publications = ";
            // for (int j = 0; j < publications.size(); j++){
            //     cout << publications[j] << ", ";
            // }
            // cout << "\n";

            // cout << "counter = " << counter << " p = " << p << "\n";
            // cout << "publications size = " << publications.size() << " authsAndNus size = " << authsAndNums.size() << "\n";

            // updating currentAuth
            if (p > 0){
                currentAuth = "";
                for (int j = 0; j < authsAndNums[p].size(); j++){
                    if (authsAndNums[p][j] != ' '){
                        // cout << authsAndNums[i] << "\n";
                        currentAuth += authsAndNums[p][j];
                    }
                    else {
                        break;
                    }
                }
                // currentAuth = authsAndNums[p].substr(0, authsAndNums[p].size()-2);
                // cout << "CurrentAuth = '" << currentAuth << "'\n";
                string currentNumChar = authsAndNums[p].substr(currentAuth.size());
                currentNum = stoi(currentNumChar);
                // currentNum++;

                // cout << "[current auth = " << currentAuth << " currentNum = " << currentNum << "]";
            }

            counter = 0;

            for (int i = 0; i < publications.size(); i++){

                // reset everything
                currentAuthors = {};
                current = "";
                found = false;

                // increase the counter for finished publications
                if (publications[i] == "-1"){
                    counter++;
                }

                // case where there are elements done
                else {

                    // tokenise elements in publications[i]
                    for (int j = 0; j < publications[i].size(); j++){
                        // cout << "publications[i].size() = " << publications[i].size() << "\n";
                        if (publications[i][j] == ' '){
                            currentAuthors.push_back(current);
                            current = "";
                        }
                        else if (j == publications[i].size()-1){
                            current = current + publications[i][j];
                            currentAuthors.push_back(current);
                            current = "";
                        }
                        else {
                            current = current + publications[i][j];
                        }
                    }   // currentAuthors now holds strings of all the authors in the present publication

                    // cout << "currentAuthors = ";
                    // for (int j = 0; j < currentAuthors.size(); j++){
                    //     cout << "'" << currentAuthors[j] << "' ";
                    // }
                    // cout << "\n";

                    // check if any of them are the current auth
                    for (int j = 0; j < currentAuthors.size(); j++){

                        // cout << "[" << currentAuthors[j] << "]\n";

                        // if (p == 11 || p == 10){
                        //     cout << "currentAuthors = " << currentAuthors[0] << " " << currentAuthors[1] << "\n";
                        //     cout << "currentAuth = " << currentAuth << "\n";
                        //     // cout << "the same? " << (currentAuthors[j] == currentAuth) << "\n";
                        //     // cout << "type of currentAuthors[0] = " << typeid(currentAuthors[0]).name();
                        //     // cout << " type of currentAuthors[1] = " << typeid(currentAuthors[1]).name() << "\n";
                        //     // cout << "type of currentAuth = " << typeid(currentAuth).name() << "\n";

                        //     cout << "does " << currentAuth[0] << " = " << currentAuthors[0] << "? " << (currentAuth == (currentAuthors[0] + ' ')) <<"\n";
                        // }

                        if (currentAuthors[j] == currentAuth){
                            found = true;
                            break;
                        }
                    }

                    // add all the elements to the array
                    if (found == true){
                        for (int j = 0; j < currentAuthors.size(); j++){

                            // this only checks for the current auth, not any other elements
                            if (currentAuthors[j] != currentAuth && (find(auths.begin(), auths.end(), currentAuthors[j]) == auths.end())){

                                // cout << "HERE:" << currentAuth[j] + " " + to_string(currentNum + 1) << "\n";

                                authsAndNums.push_back(currentAuthors[j] + " " + to_string(currentNum + 1));
                                auths.push_back(currentAuthors[j]);
                            }
                        }

                        // remove this current element from publications
                        publications[i] = "-1";
                    }

                }
            }

            // incrementing i
            p++;

            // currentAuth = "-2";
            // for (int j = 0; j < authsAndNums[i].size(); j++){
            //     if (authsAndNums[i][j] != ' '){
            //         cout << authsAndNums[i] << "\n";
            //         currentAuth += authsAndNums[i][j];
            //     }
            //     else {
            //         break;
            //     }
            // }
            // cout << "[currentAuth = " << currentAuth << "]\n";
            // string a = authsAndNums[i].substr(0,1);
            // cout << "[authsAndNums[i] substr = " << a << "]";
            // currentAuth = authsAndNums[i].substr(0, authsAndNums[i].size()-3);
            // currentNum = stoi(authsAndNums[i].substr(authsAndNums.size()-1,1));

        }

        // cout << "p = " << p << "\n";
        // cout << "authsAndNums size = " << authsAndNums.size() << "\n";

        // adding all the remaining authors
        currentAuthors = {};

        // cout << "publications = ";
        // for (int j = 0; j < publications.size(); j++){
        //     cout << publications[j] << ", ";
        // }
        // cout << "\n";

        for (int i = 0; i < publications.size(); i++){

            // cout << "publications = ";
            //     for (int j = 0; j < publications.size(); j++){
            //         cout << publications[j] << " ";
            //     }
            //     cout << "\n";

            if (publications[i] != "-1"){
                // tokenise elements in publications[i]
                for (int j = 0; j < publications[i].size(); j++){
                    if (publications[i][j] == ' '){
                        currentAuthors.push_back(current);
                        current = "";
                    }
                    else if (j == publications[i].size()-1){
                        current = current + publications[i][j];
                        currentAuthors.push_back(current);
                        current = "";
                    }
                    else {
                        current = current + publications[i][j];
                    }
                }   // currentAuthors now holds strings of all the authors in the present publication

            }

            // cout << "\ncurrentAuthors = ";
            for (int i = 0; i < currentAuthors.size(); i++){
                // cout << currentAuthors[i] << " ";
                authsAndNums.push_back(currentAuthors[i]);
            }
        }

        sort(authsAndNums.begin(), authsAndNums.end());

        // remove duplicates
        auto it = unique(authsAndNums.begin(), authsAndNums.end());
        authsAndNums.erase(it, authsAndNums.end());

        return authsAndNums;

    }
};

#endif