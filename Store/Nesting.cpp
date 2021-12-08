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
//Nesting : submit later not response codility

int solution(string S){    
    if(S.empty()) return 1;
    if(S.size()%2 != 0) return 0;

    stack<char> stack;

    for(int i = 0; i < S.size(); i++){
        if(S[i]=='('){
            stack.push(S[i]);
        }
        else if( S[i]==')'){
            if(stack.empty()) return 0;
            stack.pop();
        }
    }
    if(!stack.empty()) return 0;

    return 1;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    string S = "())";
    auto res = solution(S);

    std::cout << "\nres : " << res;
}