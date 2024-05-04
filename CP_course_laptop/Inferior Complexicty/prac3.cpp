#include <iostream>
using namespace std;

string checkPair(long long S,long long P) {
    
    for (long long N=1;N*N <= P; N++) {
        
        long long M = S - N;
        
        if (N*M == P) {
            
            if (M > 0)
                return "Yes";
        }
    }
    return "No";
}

int main() {
    long long S, P;
    cin >> S >> P;
    
    if (P==1 && S!=2) {
        cout << "No" << endl;
        return 0;
    }
    
    cout << checkPair(S,P) << endl;

    return 0;
}
