#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <climits>
#include <map>
#include <math.h>
#include <stdio.h>

using namespace std;
// CodeAlone : ?/100.  I think this time it is done.  

int getPatternChangeCount(vector<int> vec, vector<int> &items){
    int changeCount = INT_MAX;
    for(int i = 1; i < vec.size() - 1; i++){
        int tmpChangeCount = vec[i] - vec[i-1] - 1;
        tmpChangeCount += vec[i+1] - vec[i] - 1;
        if(tmpChangeCount < changeCount){
           changeCount = tmpChangeCount;
           items.clear();
           items.push_back(vec[i-1]);
           items.push_back(vec[i]);
           items.push_back(vec[i+1]); 
        }
    }
    return changeCount;
}

int solution(string &S){
    vector<int> vecA, vecB;
    
    for(int i = 0; i < S.length(); i++){
        if(S[i] == 'a')      vecA.push_back(i);
        else if(S[i] == 'b') vecB.push_back(i);
    }
    
    if(vecA.size() < 3 || vecB.size() < 3) return -1;

    sort(vecA.begin(), vecA.end());
    sort(vecB.begin(), vecB.end());
    
    vector<int> itemsA, itemsB;
    int changeCountA = getPatternChangeCount(vecA, itemsA);
    int changeCountB = getPatternChangeCount(vecB, itemsB);
    
    if(changeCountA != 0 && changeCountB != 0){
        if(itemsA[2] > itemsB[0])
            changeCountA -= 1;
        else if(itemsB[2] > itemsA[0])
            changeCountB -= 1;
    }
    
    return changeCountA + changeCountB;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    
    // string S = "aaabbb";
    // string S = "aababb";
    // string S = "abaabb";
    // string S = "baaabb";
    // string S = "abbbaa";
    // string S = "ababab";
    // string S = "babbbaa";
    // string S = "bbbababaaab";
    // string S = "abbabb";
    string S = "abbaaaaaaaaaaaaaaaaaaaaababaaaaabaaaaaaaaaaaab";

    printf("\nres : '%s' : %d", S.c_str(), solution(S) );
    
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