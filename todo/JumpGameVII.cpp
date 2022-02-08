#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <climits>
#include <map>
#include <math.h>
#include <stdio.h>
#include <stack>

using namespace std;

//Jump Game VII

// Huge input cause time limit exceed. i must review my code and increase efficientcy

int solution(string&, int, int);

class TestCase
{
private:
  bool m_output;
  bool m_status;
  
public:
  string m_input;
  bool m_expected;
  int m_minJump;
  int m_maxJump;

  TestCase(string input, int minJump, int maxJump, bool expected)
    :m_input{input}, m_minJump{minJump}, m_maxJump{maxJump},m_expected{expected}{}
 
  TestCase& Run(){
    m_output = solution(m_input, m_minJump, m_maxJump);
    m_status = m_expected == m_output;
    return *this;
  }

  void PrintResults(){
    const char* status_str = m_status ? "Success" : "Fail";
    printf("\nInput: '%s', [%d, %d] \tExpected : %s \tOutput : %s \tStatus : %s!", m_input.c_str(), m_minJump, m_maxJump, toString(m_expected), toString(m_output), status_str);
  }

  char* toString(bool val){
    if(val == true) return "True";
    else if(val == false) return "False";
    else return "Undefined Value";
  }
};

int solution(string &s, int minJump, int maxJump){
  if(s.length() < 2 || s.length() > 100000) return false;
  if(s[0] != '0' || s[s.length()-1] != '0') return false;

  stack<int> stack;
  stack.push(0);
  
  while( !stack.empty() && stack.top() < s.length()-1){
    int curr = stack.top();
    for(int j = maxJump; j >= minJump; j--){
      if(curr+j < s.length() && s[curr+j] == '0'){
        stack.push(curr+j);
        break;
      }
    }
    if(curr == stack.top() ){
        s[stack.top()] = '1';
        stack.pop();
      } 
  }
  bool res = !stack.empty();
  return res;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;

    // TestCase testCase = {"011010", 2, 3, true};
    // TestCase testCase = {"01101110", 2, 3, true};
    TestCase testCase = {"011011110", 2, 3, false};
    // TestCase testCase = {"011100111110", 3, 6, true};
    
    // TestCase testCase = {"011100111110", 3, 6, true};

    testCase.Run().PrintResults();
}



/*
Medium


You are given a 0-indexed binary string s and two integers minJump and maxJump. In the beginning, you are standing at index 0, which is equal to '0'. You can move from index i to index j if the following conditions are fulfilled:

  * i + minJump <= j <= min(i + maxJump, s.length - 1), and
  * s[j] == '0'.
Return true if you can reach index s.length - 1 in s, or false otherwise.

Constraints:

  * 2 <= s.length <= 105
  * s[i] is either '0' or '1'.
  * s[0] == '0'
  * 1 <= minJump <= maxJump < s.length

link : https://leetcode.com/problems/jump-game-vii/

*/