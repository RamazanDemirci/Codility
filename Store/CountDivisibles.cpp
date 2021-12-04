#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>

//CountDivisibles

int solution(int A, int B, int K){
    int c = 0;
    for(int i=A; i<B; i++)
        if(i%K == 0) c++;

    return c;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    auto res = solution(6,11,2);
    std::cout << "\nres : " << res;
}