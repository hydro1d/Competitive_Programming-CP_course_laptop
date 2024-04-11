#include <bits/stdc++.h>
using namespace std; 
int main() {
    int a, b;
    cin >> a >> b;
    int y = 0;

 
    for(;a<=b;y++)
    {
        a = a*3;
        b = b*2;
    }

    cout << y << endl;

    return 0;
}
