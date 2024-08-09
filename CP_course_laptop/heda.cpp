#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        char str1[100];
        cin >> str1;

        int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}; 
        int totalLeds = 0;

        for (int i = 0; str1[i]; ++i) {
            int digit = str1[i] - '0'; 
            totalLeds += leds[digit];
        }

        cout << totalLeds <<" leds" << endl;
    }

    return 0;
}
