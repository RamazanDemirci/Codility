#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>
#include <iterator>

using namespace std;
//MaximumProductOfThree

int solution(vector<int> &vec){
    if(vec.empty()) return 0;
    int res = 0;
    vector<int> S(vec.size(), 0);
    vector<int> E(vec.size(), vec.size() - 1);
    vector<int> CS(vec.size(), 0);
    vector<int> CE(vec.size(), 0);

    for(int i = 0; i < vec.size(); i++){
        if(i-vec[i] > 0) S[i] = i-vec[i];
        if(i+vec[i] <= vec.size() - 1) E[i] = i+vec[i];

        CS[S[i]]++;
        CE[E[i]]++;
    }

    int ccs = 0, cce = 0;
    for(int i = 0; i < vec.size(); i++){
        ccs += CS[i];
        
        if(i != 0)
            cce += CE[i-1];

        res += (ccs - cce - CS[i])
               * CS[i] + CS[i] * (CS[i]-1)/2;
    }

    if(res > 10000000) return -1;

    return res;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    vector<int> P{1,5,2,1,4,0};
    auto res = solution(P);

    std::cout << "\nres : " << res;
}