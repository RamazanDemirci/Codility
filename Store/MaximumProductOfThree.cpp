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
    sort(vec.begin(), vec.end());
    int N = vec.size();
    int P1 = vec[N-1]*vec[0]*vec[1];
    int P2 = vec[N-1]*vec[N-2]*vec[N-3];
    return max(P1, P2);
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    vector<int> P{-3,-2,1,2,5,6};
    auto res = solution(P);

    std::cout << "\nres : " << res;
}