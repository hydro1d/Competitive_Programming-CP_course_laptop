#include <iostream>
using namespace std;

int main() {
    long long  n;
    cin >> n;

    long long total = n * (n + 1) / 2;
    long long inputsum = 0;
    for (long long i = 1; i < n; ++i) {
        long long num;
        cin >> num;
        inputsum += num;
    }

    long long miss = total - inputsum;
    cout << miss << endl;

    return 0;
}
