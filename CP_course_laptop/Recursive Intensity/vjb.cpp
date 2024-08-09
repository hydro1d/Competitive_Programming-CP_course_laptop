#include <bits/stdc++.h>
using namespace std;

int main() {
    string dna;
    cin >> dna;
    
    int dnalen = dna.length();

    int max_length = 1;
    int initial_length = 1;

    for (int i = 1; i < dnalen; ++i) {
        
        if (dna[i] == dna[i - 1]) {
            initial_length++;
        } else {
            max_length = max(max_length, initial_length);
            initial_length = 1; 
        }
    }
    max_length = max(max_length, initial_length);

    cout << max_length << endl;

    return 0;
}
