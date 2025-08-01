#ifndef DOWNLOADINGFILES_HPP
#define DOWNLOADINGFILES_HPP

#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Files {
    public:
    int speed;
    int time;
    double newSpeed;
    Files(){
        speed = 0;
        time = 0;
        newSpeed = 0;
    }
    Files(int s, int t){
        speed = s;
        time = t;
        newSpeed = s;
    }
};

class DownloadingFiles {
    public:
    vector<Files> fileList;
    double actualTime(vector<string> tasks){
        //put all the elements in fileList

        for (int i = 0; i < tasks.size(); i++) {        //for every task
            int f = tasks[i].find(" ");
            
            string speedStr = tasks[i].substr(0, f);    //extract the strings
            int speedInt = stoi(speedStr);              //turn into ints

            string timeStr = tasks[i].substr(f + 1);
            int timeInt = stoi(timeStr);

            Files a = Files(speedInt, timeInt);         //create the files
            fileList.push_back(a);                      //put them in a vector
        }

        double actualTime = 0;
        int minTime = 10001;                            //larger than the max time
        int index;
        double addedSpeed;
        Files deletedFile;

        for (int i = 0; i < fileList.size(); i++){      //find the smallest time
            if (fileList[i].time < minTime){
                minTime = fileList[i].time;
                index = i;
            }
        }

        deletedFile = fileList[index];
        actualTime = actualTime + deletedFile.time; //adding the time

        fileList.erase(fileList.begin() + index);       //erase the file that's finished

        while(fileList.size() > 0){
            minTime = 10001;
            for (int i = 0; i < fileList.size(); i++){  //find the smallest time
                if (fileList[i].time < minTime){
                    minTime = fileList[i].time;
                    index = i;
                }
            }

            fileList[index].newSpeed = fileList[index].speed + deletedFile.newSpeed;

            double newTime = (fileList[index].time - actualTime) * fileList[index].speed / (fileList[index].newSpeed);   //calculating new speed
            fileList[index].time = newTime;

            actualTime = actualTime + newTime;          //adding the new time

            deletedFile = fileList[index];
            fileList.erase(fileList.begin() + index);   //erasing next element
        }

        return actualTime;
    }
};

#endif