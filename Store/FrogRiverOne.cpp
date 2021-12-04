#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>

//Frog River One

int solution(int X, std::vector<int> vec){
    std::vector<int> B(X,-1);

    for(int i = 0; i < vec.size(); i++){
        if(vec[i] <= X && B[vec[i]-1] == -1) B[vec[i]-1] = i;
    }
    int max = 0;
    for(int i = 0; i < B.size(); i++){
        if(B[i] == -1) return -1;
        if(max < B[i]) max = B[i];
    }
    return max;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    auto res = solution(5,std::vector<int>{1,1,2,5,3,4,3});
    std::cout << "\nres : " << res;
}