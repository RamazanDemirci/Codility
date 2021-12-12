#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;
// TieRopes : 100/100 got.

int solution(int K, vector<int> &A){
    int res = 0, sum = 0;
    
    for (int i = 0; i < A.size(); i++){
        sum += A[i];
        if (sum >= K){
            res++;
            sum = 0;
        }
    }
    
    return res;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    
    vector<int> A{1,2,3,4,1,1,3}; 
    //  vector<int> A{1}; 
    // vector<int> A{}; 

    auto res = solution(4, A);
    

    std::cout << "\nres : " << res;
}