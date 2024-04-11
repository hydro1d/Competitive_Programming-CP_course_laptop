#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,tp,tp2,lp;
    cin >> n;

     tp = (n * (n + 1));
     tp2=tp/2;
     lp = tp2 - (n - 1);

    cout << lp << endl;

    return 0;
}
