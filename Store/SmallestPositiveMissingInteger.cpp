#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>

//Smallest Positive Missing Integer

int solution(std::vector<int> vec){
    std::sort(vec.begin(),vec.end());

    if(vec[vec.size()-1] <= 0) return 1;
    bool iso = 0;

    for (int i = 0; i < vec.size(); i++)
    {    
        if(vec[i] == 1) iso = true;
    }  
    
    if(!iso){return 1;}
   
    for (int i = 0; i < vec.size()-1; i++){
        //if(vec[i]>0
        //   && vec[i+1] != vec[i]+1
        //   && vec[i+1] != vec[i]) return vec[i]+1;

        if(vec[i] > 0
           && vec[i+1] - vec[i] > 1) return vec[i]+1;
    }
    return vec[vec.size()-1];
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    auto res = solution(std::vector<int>{1,3,6,4,1,2});
    std::cout << "\nres : " << res;
}