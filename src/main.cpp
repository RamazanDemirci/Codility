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
//MaxProfit : 100/100 got.

int solution(vector<int> &A){
    if(A.empty()) return 0;
    int minLeft=A[0], maxRight=0, maxProfit = 0;
    
    for(int i = 0; i < A.size(); i++){
        if(A[i]  < minLeft) {
            minLeft = A[i];
            maxRight = A[i];
        }
        if(A[i] > maxRight){
            maxRight = A[i];
            if(maxRight - minLeft > maxProfit)
                maxProfit = maxRight - minLeft;
        }
    }

    return maxProfit;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    vector<int> A{23171,21011,21123,21366,21013,21367};

    auto res = solution(A);

    std::cout << "\nres : " << res;
}