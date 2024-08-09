#include <bits/stdc++.h>

using namespace std;

int main() {
    int high = INT_MIN; 
    int position = -1; 

    for (int i = 1; i <= 100; i++) {
        int n;
        cin >> n;

        if (n > high) {
            high = n; 
            position = i; 
        }

        cout << high << endl; 
    }

    cout  << high << endl;
    cout <<  position << endl;

    return 0;
}
