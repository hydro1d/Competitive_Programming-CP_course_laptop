#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    
    for (int i = 0; i < testcase;i++) {
        int n, a, b;
        cin >> n >> a >> b;
        
        if (n % 2 == 0) {
            int c1;
            c1= (n / 2) * b;
           
            cout << min(n * a,c1) << endl;
        } else {
                int c2;
             c2= (n / 2) * b + a;
            cout << min(n * a,c2) << endl;
        }
    }

    return 0;
}
