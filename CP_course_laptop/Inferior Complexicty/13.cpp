#include <iostream>

using namespace std;

int main() {
    int tc;
    cin >> tc;  
    
    for (int i = 0; i < tc; ++i) {
        int t;
        cin >> t;  
        for (int j = 0; j < t; ++j) {
            int c;
            cin >> c;  
            
            
            int factorial = 1;
            for (int k = 1; k <= c - 1; ++k) {
                factorial = factorial*k;
            }

            cout << factorial << endl;
        }
    }

    return 0;
}
