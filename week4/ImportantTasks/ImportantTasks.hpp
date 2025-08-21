#ifndef IMPORTANTTASKS_HPP
#define IMPORTANTTASKS_HPP

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class ImportantTasks{
    public:
    int maximalCost(vector<int> complexity, vector<int> computers){
        vector<int> sortedComplexity = complexity;
        sort(sortedComplexity.begin(), sortedComplexity.end(), greater<int>());

        vector<int> sortedComputers = computers;
        sort(sortedComputers.begin(), sortedComputers.end(), greater<int>());

        int currentComp = 0;
        int cost = 0;
        for (int currentTask = 0; currentTask < complexity.size(); currentTask++){
            if (sortedComplexity[currentTask] <= sortedComputers[currentComp]){
                currentComp++;
                cost++;
            }

            if (currentComp >= computers.size()){
                break;
            }
        }

        return cost;
    }
};

#endif