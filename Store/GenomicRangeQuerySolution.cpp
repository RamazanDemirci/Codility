#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>
#include <iterator>

using namespace std;
//GenomicRangeQuerySolution

vector<int> solution(string &S, vector<int> &P, vector<int> &Q){
    vector<int> R;
    vector<int> A(S.size());
    vector<int> C(S.size());
    vector<int> G(S.size());
    vector<int> T(S.size());
    int a=0, c=0,g=0,t=0;

    for(int i=0; i<S.size(); i++){
        if(S[i] == 'A') a++;
        else if(S[i] == 'C') c++;
        else if(S[i] == 'G') g++;
        else if(S[i] == 'T') t++;

        A[i]=a;
        C[i]=c;
        T[i]=t;
        G[i]=g;
    }

    for(int i=0; i<S.size(); i++){
        if(P[i]==Q[i]){
            if(S[P[i]]=='A') R.push_back(1);
            else if(S[P[i]]=='C') R.push_back(2);
            else if(S[P[i]]=='G') R.push_back(3);
            else if(S[P[i]]=='T') R.push_back(4);
        }
        else if(A[P[i]] < A[Q[i]] || S[P[i]]=='A')R.push_back(1);
        else if(C[P[i]] < C[Q[i]] || S[P[i]]=='C')R.push_back(2);
        else if(G[P[i]] < G[Q[i]] || S[P[i]]=='G')R.push_back(3);
        else if(T[P[i]] < T[Q[i]] || S[P[i]]=='T')R.push_back(4);
    }
    return R;
}

template <typename T>
std::ostream& operator<< (std::ostream& out, const vector<T>& vec) {
    if ( !vec.empty() ) {
        out << '[';
        std::copy(vec.begin(), vec.end(), std::ostream_iterator<T>(out, ", "));

        out << "\b\b]";
    }
    return out;
}



int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    string s = "CAGCCTA";
    vector<int> P{2,5,0};
    vector<int> Q{4,5,6};
    auto res = solution(s, P, Q);

    std::cout << "\nres : " << res;
}