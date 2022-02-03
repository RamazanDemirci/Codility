#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <climits>
#include <map>
#include <math.h>
using namespace std;
// FrogRiverOne : 100/100 got. 


int solution(int X, vector<int> &A){
    int sum = X*(X+1)/2;
    vector<bool> visited(N+1, false);

    for(int i = 0; i < A.size(); i++){
      auto val = A[i];
      if(visited[val] == false)
      {
        visited[val] = true;
        sum -= val;
      }
      if(sum == 0) return i;
    }
    return -1;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    vector<int> vec = {1,3,1,4,2,3,5,4};
    std::cout << "\nres : " << solution(5, vec) ;
}



