#include <iostream>
#include <math.h>
#include <vector>

//Cyclic Array

std::vector<int> solution(std::vector<int> vec, int key){
    std::vector<int> res(vec.size());
    
    for(int i = 0; i < vec.size(); i++)
        res[(i+key)%vec.size()] = vec[i];
    
    return res;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    auto key = 3;
    auto res = solution(std::vector<int>{4,5,6,7,8,1,2,3}, key);
    std::cout << "\n";
}