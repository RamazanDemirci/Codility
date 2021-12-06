#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>
#include <iterator>

using namespace std;
//TriangleTriplet

int solution(vector<int> &vec){ 
    if(vec.size() < 3) return 0;
    sort(vec.begin(), vec.end());
    for(int i = 0; i < vec.size() - 2; i++){
        if(vec[i] > vec[i+2] - vec[i+1])
            return 1;
    }

    return 0;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    vector<int> P{1,2,5,8,10,20};
    auto res = solution(P);

    std::cout << "\nres : " << res;
}