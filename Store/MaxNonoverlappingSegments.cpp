#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
// MaxNonoverlappingSegments : 100/100 got.

int solution(vector<int> &A , vector<int> &B){
    if(A.size() == 0 || B.size() == 0) return 0;
    int curLeft = 0, curRight = INT_MIN, res = 0;
    
    for (int i = 0; i < A.size(); i++){
        if (curRight < A[i]) {
            res++;
            curLeft = A[i];
        }    
        if(curRight <= curLeft) curRight = B[i];
    }
    
    return res;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    
    vector<int> A{1,3,7,9,9}; 
    vector<int> B{5,6,8,9,10}; 
    vector<int> A1{0}; 
    vector<int> B1{0};

    std::cout << "\nres : " << solution(A, B);
    std::cout << "\nres : " << solution(A1, B1);
}