#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>
#include <iterator>
#include <stack>
#include <queue>

using namespace std;
//Dominator : 75/100 got.

int solution(vector<int> &A){
    if(A.empty()) return -1;
    if(A.size() == 1) return 0;
    int res = -1;

    sort(A.begin(), A.end());
    if(A[A.size()/4] == A[A.size()/2] 
    || A[A.size()/2] == A[A.size()*3/4])
        res = A.size()/2;

    return res;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    vector<int> H{3,4,3,2,3,3,-1,3,3};
    auto res = solution(H);

    std::cout << "\nres : " << res;
}