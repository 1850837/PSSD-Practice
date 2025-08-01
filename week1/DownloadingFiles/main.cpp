#include "DownloadingFiles.hpp"

int main(){

    DownloadingFiles a;

    std::cout << "Data: {'3 57','2 22'}, expected; 43.0, got: " << a.actualTime({"3 57","2 22"}) << "\n";
    std::cout << "Data: {'25 1000','5 5000','10 5000'}, expected; 2500.0, got: " << a.actualTime({"25 1000","5 5000","10 5000"}) << "\n";
    std::cout << "Data: {'3 1057','2 1022'}, expected; 1043.0, got: " << a.actualTime({"3 1057","2 1022"}) << "\n";
    std::cout << "Data: {'1 10','1 20','2 40'}, expected; 27.0, got: " << a.actualTime({"1 10","1 20","2 40"}) << "\n";
    std::cout << "Data: {'6 88','39 7057','63 2502','45 2285','28 8749','62 3636','1 5546','49 5741'}, expected; 4414.542662116041, got: " 
    << a.actualTime({"6 88","39 7057","63 2502","45 2285","28 8749","62 3636","1 5546","49 5741"}) << "\n";

    return 0;
}