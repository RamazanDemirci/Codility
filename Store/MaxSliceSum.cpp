#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>
#include <iterator>
#include <stack>
#include <queue>
#include <climits>

using namespace std;
//MaxSliceSum : 69/100 got.

int solution(vector<int> &A){
    if(A.empty()) return 0;
    if(A.size() == 1) return A[0];
    int currSum=A[0], maxSum=A[0]; 
    
    for(int i = 1; i < A.size(); i++){
        if(currSum + A[i] > currSum) currSum += A[i];
        else if(currSum + A[i] > A[i]) currSum += A[i];
        
        if(A[i] > currSum) currSum = A[i];

        if(currSum > maxSum) maxSum = currSum;
        else currSum = A[i];
    }

    return maxSum;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    vector<int> A{-2,1};
    // vector<int> A{3,2,-6,4,0};

    auto res = solution(A);

    std::cout << "\nres : " << res;
}