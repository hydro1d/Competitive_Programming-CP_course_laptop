#include <bits/stdc++.h>
using namespace std;

bool is_odd(int n) {
    return n % 2 != 0;
}

bool is_bin_palindrome(int n) {
    string bin;
    // bin te convert korsi string hisbe store korbo
    while (n > 0) {
        if (n % 2 == 0) {
            bin += '0';
        } else {
            bin += '1';
        }
        n /= 2;
    }
    
    // Check if binary string is a palindrome
    int left = 0;
    int right = bin.size() - 1;
    while (left < right) {
        if (bin[left] != bin[right]) {
            return false; // Not a palindrome
        }
        left++;
        right--;
    }
    
    return true; 
}

int main() {
    int N;
    cin >> N;

    if (is_odd(N) && is_bin_palindrome(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
