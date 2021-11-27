#include <iostream>
#include <math.h>

int solution(int binary_num){
    int max_gap = 0;
    int gap = 0;

    while (binary_num)
    {
        if ((binary_num & 0x1) == true)
        {
            max_gap = std::max(max_gap, gap);
            gap = 0;
        }
        else
        {
            gap++;
        }
        binary_num = binary_num >> 0x1;
    }
}


//Binary Gap
int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    
    std::cout << "\nres : " << solution(0b1000010) << " ex:"  << 4;
    std::cout << "\nres : " << solution(0b00001000010) << " ex:"  << 4;
    std::cout << "\nres : " << solution(0b100001000) << " ex:"  << 4;
    std::cout << "\nres : " << solution(0b1001000) << " ex:"  << 3;
    std::cout << "\n";
}