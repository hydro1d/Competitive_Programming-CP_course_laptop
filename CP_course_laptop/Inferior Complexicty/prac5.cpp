#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;

    for (int i = 1; i <= s.size() / 2; i++) {
        swap(s[2*i-2], s[2*i-1]);
    }

    cout <<s<< endl;

    return 0;
}
// //In each iteration, we swap the characters at indices 2*i-2 and 2*i-1.
// When i = 1, we swap the characters at indices 0 and 1.
// When i = 2, we swap the characters at indices 2 and 3.
// And so on.