#ifndef INCHWORM_HPP
#define INCHWORM_HPP

#include <cmath>
using namespace std;

class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int numLeaves = 0;
    for (int i = 0; i < branch+1; i=i+rest){
        if (i%leaf == 0){
            numLeaves++;
        }
    }

    return numLeaves;
  }
};

#endif