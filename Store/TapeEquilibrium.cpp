#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>

//Tape Equilibrium

int solution(std::vector<int> vec){
     if(vec.size() < 2) return 0;

     int s = std::accumulate(vec.begin(), vec.end(), 0);
     int sL = 0;
     int minDiff = INT_MAX;

     for(int i = 0; i< vec.size()-1; i++)
     {
         sL += vec[i];
         int diff = std::abs(2*sL-s);
         if(minDiff > diff)minDiff=diff;

     }
     return minDiff;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    auto res = solution(std::vector<int>{4,6,1,5});
    std::cout << "\nres : " << res;
}