#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
if (n == 1) return false;
for (int i = 2; i < n; i++) {
if (n % i == 0) return false;
}
return true;
}

bool is_palindrome(int n) {
    string s = to_string(n);
    return equal(s.begin(), s.begin() + s.size() / 2, s.rbegin());
}

int count_divisors(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            count += (i * i == n) ? 1 : 2;
        }
    }
    return count;
}

int32_t main() {
    int n;
    cin >> n;

    int a[n];
    int maxi = INT_MIN, mini = INT_MAX, divisors = 0;

    int max_divisors_num = 0, max_divisors = 0;

    int prime_count = 0;
    int  palindrome_count = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
        divisors = __gcd(divisors, a[i]);

      
        if (is_prime(a[i])) prime_count++;

		
        if (is_palindrome(a[i])) palindrome_count++;
        

        int current_divisors = count_divisors(a[i]);
        if (current_divisors > max_divisors) {
            max_divisors = current_divisors;
            max_divisors_num = a[i];
        }
    }

    cout << "The maximum number : " << maxi << endl;
    cout << "The minimum number : " << mini << endl;
    cout << "The number of prime numbers : " << prime_count << endl;
    cout << "The number of palindrome numbers : " << palindrome_count << endl;
    cout << "The number that has the maximum number of divisors : " << max_divisors_num << endl;

    return 0;
}