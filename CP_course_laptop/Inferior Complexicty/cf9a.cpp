#include<bits/stdc++.h>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;

    
    int foutcomes = max(6 - max(y, w) + 1, 0);

   
    int toutcomes = 6;

   
    int gcd = __gcd(foutcomes, toutcomes);

    foutcomes /= gcd;
    toutcomes /= gcd;

    
    cout << foutcomes << "/" << toutcomes << endl;

    return 0;
}
