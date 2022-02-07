#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <climits>
#include <map>
#include <math.h>
#include <stdio.h>

using namespace std;
// Binary String Alternating :

int solution(string &S){
  int count1s = 0, count0s = 0;
  int pattern_10_err = 0, pattern_01_err = 0;
  
  for(int i = 0; i < S.length(); i++){
      if(S[i] == '1') {
        count1s++;
        i%2 == 1 ? pattern_10_err++ : pattern_01_err++;
      }
      else if(S[i] == '0') {
        count0s++;
        i%2 == 0 ? pattern_10_err++ : pattern_01_err++;
      }
  }

  if(abs(count1s - count0s) > 1) return -1;

  float changeCount = min(pattern_10_err, pattern_01_err);

  if(changeCount < 1) return 0;

  return ceil(changeCount/2);
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    
    // string S = "111000";
    // string S = "010";
    // string S = "1110";
    // string S = "101010110101010100101010011001111000";
    // string S = "110101010100";
    // string S = "000101010111";
    // string S = "101011010100";
    // string S = "10101011010101010010101001100111000";
    // string S = "1";
    // string S = "100";
    string S1 = "00011110110110000000000110110101011101111011111101010010010000000000000001101101010010001011110000001101111111110000110101101101001011000011111011101101100110011111110001100110001110000000001100010111110100111001001111100001000110101111010011001"; // this is failed. i can not effort this 

    printf("\nres : '%s' : %d", S1.c_str(), solution(S1) );
}


/*
1864. Minimum Number of Swaps to Make the Binary String Alternating

Medium

Given a binary string s, return the minimum number of character swaps to make it alternating, or -1 if it is impossible.

The string is called alternating if no two adjacent characters are equal. For example, the strings "010" and "1010" are alternating, while the string "0100" is not.

Any two characters may be swapped, even if they are not adjacent.


Constraints:

 * 1 <= s.length <= 1000
 * s[i] is either '0' or '1'.

link : https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-binary-string-alternating/

*/





