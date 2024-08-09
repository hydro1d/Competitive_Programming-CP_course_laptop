#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    
    #ifdef _SC_CLK_TCK 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #endif

    unordered_set<int> distinct_values;
    int x;
    
    for (int i = 0; i < n; ++i) {
        cin >> x;
        distinct_values.insert(x);
    }

    cout << distinct_values.size() << endl;

    return 0;
}
