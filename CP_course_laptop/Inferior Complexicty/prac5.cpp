#include <iostream>
#include <string>

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
