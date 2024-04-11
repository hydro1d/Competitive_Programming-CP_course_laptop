#include <bits/stdc++.h>
using namespace std;

int main() {
    double xr, yr, xw, yw;
    cin >> xr >> yr >> xw >> yw;

    double dr = sqrt(xr * xr + yr * yr);
    double dw = sqrt(xw * xw + yw * yw);

 
    if (dr < dw) {
        cout << "Russo" << endl;
    } else if (dw < dr) {
        cout << "Wil" << endl;
    } else if(dw==dr) {
        cout << "Empate" << endl;
    }

    return 0;
}
