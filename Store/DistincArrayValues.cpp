#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>
#include <iterator>

using namespace std;
//DistincArrayValues

int solution(vector<int> &vec){
    int res = 0;
    sort(vec.begin(), vec.end());

    for(int i = 0; i < vec.size(); i++){
        if(vec[i] != vec[i+1]) 
            res = vec[i];
    }

    return res;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    vector<int> P{2,1,1,2,3,1};
    auto res = solution(P);

    std::cout << "\nres : " << res;
}