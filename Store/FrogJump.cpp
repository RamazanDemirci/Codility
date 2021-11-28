#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

//Frog Jump

int solution(int X, int Y, int D){
    int v = (Y-X/D);
    if(X+v*D<Y) return v+1;
    else return v;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
}