#include <iostream>
using namespace std;

void alg(int n) {
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
    }
    cout << 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    alg(n);
    
    return 0;
}
