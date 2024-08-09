#include <bits/stdc++.h>
using namespace std;

string reverseStr(string s) {

    reverse(s.begin(),s.end());
    return s;
}

int main() {
    int N;
    cin >> N;
    cin.ignore(); 

    for (int i = 0; i < N; i++) {
        string line;
        getline(cin, line);

        
        line = reverseStr(line);

        
        for (char& ch : line) {
            if (isalpha(ch)) {
                ch = (ch - 'a' + 3) % 26 + 'a';
            }
        }

        
        int half = line.length() / 2;
        for (int j = line.length() - 1; j >= half; j--) {
            if (isalpha(line[j])) {
                line[j] = line[j] - 1;
            }
        }

        cout << line << endl;
    }

    return 0;
}
