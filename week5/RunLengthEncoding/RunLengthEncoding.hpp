#ifndef RUNLENGTHENCODING_HPP
#define RUNLENGTHENCODING_HPP

#include <string>
#include <iostream>
using namespace std;

class RunLengthEncoding {
    public: 
    string decode(string text){
        string currentLengthStr = "";
        int currentLength;
        string result;
        int skip;
        
        for (int i = 0; i < text.size(); i++){
            currentLength = 0;
            currentLengthStr = "";
            skip = 0;

            if (text[i] > 63){      //if it's a letter of some description
                result.push_back(text[i]);
            }
            else {                  //if it's a number
                // cout << "Number found, and the number is = " << text[i] << "\n";
                for (int j = i; j < text.size() + i; j++){
                    // cout << "text[j] = " << text[j] << "\n";
                    if (text[j] < 63){
                        currentLengthStr.push_back(text[j]);
                        // cout << "CurrentLengthStr = " << currentLengthStr << "\n";
                    }
                    else {
                        // cout << "Text[j] = " << text[j] << "\n";
                        break;
                    }
                }

                // cout << "Woah! CurrentLengthStr = " << currentLengthStr << "\n";

                if (currentLengthStr.size() > 2){
                    return "TOO LONG";
                }

                currentLength = stoi(currentLengthStr);

                skip = currentLengthStr.size();

                for (int j = 0; j < skip; j++){
                    i++;
                }

                for (int j = 0; j < currentLength; j++){
                    result.push_back(text[i]);
                }
            }

            if (result.size() > 50){
                return "TOO LONG";
            }
        }

        return result;

    }
};

#endif