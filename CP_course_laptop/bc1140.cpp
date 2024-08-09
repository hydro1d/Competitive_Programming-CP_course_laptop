#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        if (line == "*") break;
        
        stringstream ss(line);
        string word;//hold each word extracted from the stringstream
        char first_letter = tolower(line[0]); // prothom word of the first word
        bool is_tautogram = true;
        
        // Check each word in the line
        while (ss >> word) {
            if (tolower(word[0]) != first_letter) {
                is_tautogram = false;
                break;
            }
        }
        
        //main ongsho
        if (is_tautogram) {
            cout << "Y\n";
        } else {
            cout << "N\n";
        }
    }
    return 0;
}
