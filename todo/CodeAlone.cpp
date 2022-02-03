#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <climits>
#include <map>
#include <math.h>
using namespace std;
// CodeAlone : 0/100 got.  Fail 


int solution(string &S){
    return 0;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    
    string S = "aaabbb";
    // string S = "aababb";
    // string S = "abaabb";
    // string S = "baaabb";
    // string S = "ababab";
    // string S = "babbbaa";
    // string S = "bbbababaaab";
    // string S = "abbabb";

    std::cout << "\nres : " << solution(S);
    
}



/*
You are given a string S consisting of letters 'a' and 'b'. The task is to rearrange letters in S so that it contains three consecutive letters 'a' and three consecutive letters 'b'. What is the minimum necessary number of swaps of neighbouring letters to achieve this?

Write a function:

class Solution { public int solution(String S); }

that, given a string S of length N, returns the number of swaps after which S would contain "aaa" and "bbb" as substrings. If it's not possible to rearrange the letters in such a way, the function should return −1.

Examples:

1. Given S = "ababab", the function should return 3. The sequence of swaps could be as follows: ababab → abaabb → aababb → aaabbb.

2. Given S = "abbbbaa", the function should return 4. The sequence of four swaps is: abbbbaa → babbbaa → bbabbaa → bbbabaa → bbbbaaa.

3. Given S = "bbbababaaab", the function should return 0. S already contains both "aaa" and "bbb" as substrings.

4. Given S = "abbabb", the function should return −1. It is not possible to obtain the required result from S as there are only two letters 'a'.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [1..100,000];
string S consists only of the characters "a" and/or "b".
Copyright 2009–2021 by Codility Limited. All Rights Reserved. Unauthorized copying, publication or disclosure prohibited.

*/