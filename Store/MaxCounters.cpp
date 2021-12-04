#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>

//Max Counters

int solution(int N, std::vector<int> vec){
    std::vector<int> R(N,0);

    int maxc = 0;
    for (int i = 0; i < vec.size(); i++)
    {    
        auto val = vec[i];
        if (val <= N)
        {
            R[val - 1]++;
            maxc = std::max(maxc,R[val - 1]);
        } else{
            std::fill(R.begin(), R.end(), maxc);
        }
    }  
    return maxc;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    auto res = solution(5,std::vector<int>{3,4,4,6,1,4,4});
    std::cout << "\nres : " << res;
}