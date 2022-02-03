#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <climits>
#include <map>
using namespace std;
// FibFrog : 100/100 got.

int fib(int num, map<int, int> &memo)
{
    if(memo.find(num) != memo.end()) return memo[num];
    if(num == 0) return 0;
    if(num == 1) return 1;
    if(num >= 2)
        memo[num] = fib(num-1, memo) + fib(num-2, memo);
    return memo[num];
}

int solution(vector<int> &A){
    map<int, int> memo;
    int count = 0, pos = -1, _fib = 2, jump = 1, pos_cand-1;
    while(pos+jump < A.size()){
        if(A[pos+jump] == 1){
            pos += jump;
            count++;
            _fib=2;
            jump=1;
        }
        jump = fib(++_fib, memo);        
    }
    if(count > 0) count++;
    return count;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    
    vector<int> A{1,1,1,1,1,1,1,1,1,1};  

    

    std::cout << "\nres : " << solution(A);
    
}