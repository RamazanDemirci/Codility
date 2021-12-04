#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>

//PermutationArrayCheck

int solution(std::vector<int> vec){
    if(vec.empty()) return 0;
    
    std::sort(vec.begin(),vec.end());

    for (int i = 0; i < vec.size(); i++)
    {    
        if(vec[i] != i+1) return 0;
    }  
    return 1;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    auto res = solution(std::vector<int>{1,3,6,4,1,2});
    std::cout << "\nres : " << res;
}