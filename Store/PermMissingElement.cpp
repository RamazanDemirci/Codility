#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

//Perm Missing Element 
//Largest element value : N+1
//Smallest element value : 1
//each element value is unique 

int solution(std::vector<int> vec){
     if(vec.empty()) return 1;

     sort(vec.begin(), vec.end());
     for(int i = 0; i < vec.size(); i++){
         if(vec[i] != i+1) return i+1;
     }
     return vec[vec.size()-1] + 1;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    auto res = solution(std::vector<int>{4,3,1,5});
    std::cout << "\nres : " << res;
}