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
//MaxDoubleSliceSum : 46/100 got. performance very bad. ı thınk about thıs later.

int solution(vector<int> &A){
    int localSum = 0, maxSum = 0;
    for(int x = 0; x < A.size()-3; x++){
        for(int y = 2; y < A.size()-1; y++){
            for(int z = 3; z < A.size(); z++){ 
                localSum = 0;
                localSum += A[x+1];
                int xx=x+1;
                int yy = y;
                if(xx+1 < y && y < z){
                    while(++xx < y){localSum += A[xx]; }
                    while(++yy < z){localSum += A[yy]; }
                }
                maxSum = max(localSum, maxSum);
            }
        }
    }
    return maxSum;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    // vector<int> A{3,2,6,-1,4,5,-1,2};
    // vector<int> A{5, 17, 0, 3};
    // vector<int> A{-8, 10, 20, -5, -7, -4};
    // vector<int> A{0, 10, -5, -2, 0};
    
    vector<int> A{6, 1, 5, 6, 4, 2, 9, 4};  // thıs ıs wrong result return. expected 26 but got 25.

    auto res = solution(A);

    std::cout << "\nres : " << res;
}