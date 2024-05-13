#include <bits/stdc++.h>
using namespace std;

bool composite(int num) {
    for (int i = 2; i * i <= num;i++) {
        if (num % i == 0)
            return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    for (int x = 2; ; x++) {
        if (composite(x) && composite(n - x)) {
            cout << x << " " << n - x << endl;
            break;
        }
    }

    return 0;
}


