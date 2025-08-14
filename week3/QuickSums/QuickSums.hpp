#ifndef QUICKSUMS_HPP
#define QUICKSUMS_HPP

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

class QuickSums {
    public:
    int minPlusses = 100;

    int minSums(string numbers, int sum){
        minPlusses = 100;                   //revising the minPlusses every call

        string st = "";
        string fi = numbers;
        recursiveSituation(st, fi, sum);

        if (minPlusses == 100){
            return -1;
        }
        return minPlusses;

    }

    void recursiveSituation(string start, string fin, int target){

        //base case
        if (fin.length() < 2){

            //case of no plus

            string final = start + fin;
            vector<long> vals = {};

            stringstream ss;
            for (char c : final) {
                if (isdigit(c)) ss << c;
                else ss << ' ';
            }
            long num;
            while (ss >> num) {
                vals.push_back(num);
            }

            // cout << "vals are: ";
            // for (int i = 0; i < vals.size(); i++){
            //     cout << vals[i] << " ";
            // }
            // cout << "\n";

            long sum = 0;
            for (int i = 0; i < vals.size(); i++){
                sum = sum + vals[i];
            }

            if (sum == target){
                //count number of +s
                int plusCount = 0;
                for (int i = 0; i < final.size(); i++){
                    if (final[i] == '+'){
                        plusCount++;
                    }
                }

                if (plusCount < minPlusses){
                    minPlusses = plusCount;
                }

                return;
            }

            //case of plus
            string final2;
            final2 = start + "+" + fin;
            vals = {};

            stringstream ss1;

            for (char d : final2) {
                if (isdigit(d)) ss1 << d;
                else ss1 << ' ';
            }
            long num2;
            while (ss1 >> num2) {
                vals.push_back(num2);
            }

            // cout << "vals2 are: ";
            // for (int i = 0; i < vals.size(); i++){
            //     cout << vals[i] << " ";
            // }
            // cout << "\n";

            sum = 0;
            for (int i = 0; i < vals.size(); i++){
                sum = sum + vals[i];
            }

            if (sum == target){
                //count number of +s
                int plusCount = 0;
                for (int i = 0; i < final2.size(); i++){
                    if (final2[i] == '+'){
                        plusCount++;
                    }
                }

                if (plusCount < minPlusses){
                    minPlusses = plusCount;
                }

                return;
            }

            return;

        }

        //recursive case
        string newEnd = fin.substr(1);
        // cout << "\nnewEnd = " << newEnd << "\n";
        // cout << "Start + fin[0] = " << start + fin[0] << "\n";

        //segfault here or later
        recursiveSituation(start + fin[0], newEnd, target); //without +

        if (start != "") {
            recursiveSituation(start + "+" + fin[0], newEnd, target);   //with +
        }

        return;

    }
};

#endif