#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vl = vector<ll>;

void solve() {
    int size;
    ll incrementC, incrementD;
    cin >> size >> incrementC >> incrementD;
    vl originalArray(size * size), computedArray(size * size);
    for (int i = 0; i < size * size; ++i)
        cin >> originalArray[i];
    sort(originalArray.begin(), originalArray.end());
    computedArray[0] = originalArray[0];
    for (int i = 1; i < size; ++i)
        computedArray[i] = computedArray[i - 1] + incrementC;
    for (int i = 1; i < size; ++i)
        for (int j = 0; j < size; ++j)
            computedArray[i * size + j] = computedArray[(i - 1) * size + j] + incrementD;
    sort(computedArray.begin(), computedArray.end());
    cout << (originalArray == computedArray ? "Yes" : "No") << '\n';
}

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--)
        solve();
    return 0;
}
