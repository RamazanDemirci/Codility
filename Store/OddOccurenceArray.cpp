#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

//Odd Occurence Array

int solution(std::vector<int> vec){
    std::sort(vec.begin(), vec.end());
    
    for(int i = 0; i < vec.size(); i+=2)
        if(vec[i] != vec[i+1]) return vec[i];

    return -1;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    auto res = solution(std::vector<int>{4,5,4,7,7,5,2});
    std::cout << "\n";
    std::cout << "res: !"<< res << std::endl;
}