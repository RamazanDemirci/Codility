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
//StoneWall : 100/100 score.

int solution(vector<int> &H){
    int res = 0;
    stack<int> stack;

    for(int i = 0; i < H.size(); i++){
        while(!stack.empty() && stack.top() > H[i]){
            res++;
            stack.pop();
        }
        
        if(stack.empty() || stack.top() != H[i]){
            stack.push(H[i]);
        }
    }
    return res + stack.size();
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    vector<int> H{8,8,5,7,9,8,7,4,8};
    auto res = solution(H);

    std::cout << "\nres : " << res;
}