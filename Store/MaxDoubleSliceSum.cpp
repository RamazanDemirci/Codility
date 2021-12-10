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
#include <string>
#include <map>

using namespace std;
//MaxDoubleSliceSum : 38/100 got. probably recursive not work for this question.

int getCurrentSum(vector<int> &vec, int x, int y, int z){
    if(x+3 > vec.size()-1) return 0;
    int localSum = 0, nestedSum = 0;
    if(y == 0)
        if(x + 3 < vec.size()-1) y = x + 3;
        else y = x + 2;
    if(z == 0) 
        if(y + 3 < vec.size()) z = y + 3;
        else z = y + 1;
    
    static std::map<int, int> memo;
    int memoIndx = x+y+z;
    if(memo.find(memoIndx) != memo.find(memoIndx)) return memo[memoIndx];
    
    if(z+1 < vec.size() )
        nestedSum = getCurrentSum(vec, x, y, z+1);
    else if(y+1 < vec.size()-1 )
        nestedSum = getCurrentSum(vec, x, y+1, 0);
    else if(x+1 < vec.size()-3 )
        nestedSum = getCurrentSum(vec, x+1, 0, 0);
    
    if(x+1 < y-1){
        localSum += vec[y-1];
        while(x+1 < y-1){localSum += vec[++x]; }
    }
        
    if(y+1 < z-1){
        localSum += vec[z-1];
        while(y+1 < z-1){localSum += vec[++y]; }
    }

    memo[memoIndx] = max(localSum, nestedSum);
    
    return memo[memoIndx];
}

int solution(vector<int> &A){
    return getCurrentSum(A, 0, 0, 0);
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    // vector<int> A{3,6,2,-1,4,5,-1,2};
    vector<int> A{5, 17, 0, 3};

    auto res = solution(A);

    std::cout << "\nres : " << res;
}