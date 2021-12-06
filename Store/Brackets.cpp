#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>
#include <iterator>
#include <stack>

using namespace std;
//Brackets : Got 75/100 score

int solution(string S){ 
    if(S.empty()) return 1;
    if(S.size()%2 != 0) return 0;

    stack<char> stack;

    for(int i = 0; i < S.size(); i++){
        if(S[i]=='[' || S[i]=='{' || S[i]=='('){
            stack.push(S[i]);
        }
        else if( S[i]==']' || S[i]=='}' || S[i]==')'){
            if(stack.empty()) return 0;
            if(stack.top() - S[i] > 3) return 0;
                
            stack.pop();
        }
    }
    if(!stack.empty()) return 0;

    return 1;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    string S = "{[()()]}";
    // string S = "([)()]";
    auto res = solution(S);

    std::cout << "\nres : " << res;
}