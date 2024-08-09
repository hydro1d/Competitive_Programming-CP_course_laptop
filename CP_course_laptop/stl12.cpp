#include <bits/stdc++.h>
using namespace std;

string convert_time(string s) {
    string Str_h = s.substr(0, 2);
    int hour = stoi(Str_h);

    if (s.find("PM") != string::npos) {
        if (hour != 12) { 
            hour += 12;
        }
    } else if (hour == 12) {
        hour = 0;
    }

    Str_h = (hour < 10) ? "0" + to_string(hour) : to_string(hour);

    
    s.replace(0, 2, Str_h);
    s.erase(s.size() - 2);

    return s;
}

int main() {
    string input_time;
    cin>>input_time;
    cout << convert_time(input_time) << endl;

    return 0;
}
