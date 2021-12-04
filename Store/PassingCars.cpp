#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>
#include <iterator>

using namespace std;
//PassingCars

int solution(vector<int> &vec){
    int sE = 0;
    long long int s = 0;
    for(int i = 0; i <vec.size(); i++){
        if(vec[i] == 0) sE++;
        if(vec[i] == 1) s += sE;
    }

    if(s > 1000000000) return -1;
    return s;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    string s = "CAGCCTA";
    vector<int> P{0,1,0,1,1};
    auto res = solution(P);

    std::cout << "\nres : " << res;
}