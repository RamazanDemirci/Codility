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
//Fish : 100/100

int solution(vector<int> &A, vector<int> &B){    
    int res = 0;
    stack<int> stack;

    for(int i = 0; i < A.size(); i++){
        int cur = A[i] * (B[i] == 1 ? -1 : 1);
        if(cur < 0) 
            stack.push(cur);

        while(!stack.empty() && abs(stack.top()) < abs(cur)){
            stack.pop();
        }

        if(stack.empty()) 
            res++;
     }
    res += stack.size();
    return res;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    vector<int> A{4,3,2,1,5};
    vector<int> B{0,1,0,0,0};

    // vector<int> A{4,8,11,9,13,15,18,16,14,17};
    // vector<int> B{0,1,0,0,0,0,0,0,0,1};
    auto res = solution(A,B);

    std::cout << "\nres : " << res;
}