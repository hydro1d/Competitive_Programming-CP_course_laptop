#include <bits/stdc++.h>

using namespace std;

int nibo(int day, int h, int m, int s) {
  return (day * 24 * 60 * 60) +( h * 60 * 60) +(m * 60 )+ s;
}

int main() {
  string temp,timeSep;
  int day, h, m, s;

 
  cin >> temp >> day >> h >> timeSep >> m >> timeSep >> s;
  int d1 = nibo(day, h, m, s);

 
  cin >> temp >> day >> h >> timeSep >> m >> timeSep >> s;
  int d2 = nibo(day, h, m, s);

 
  int total = d2 - d1;

 

  // Days
  cout << total / (24 * 60 * 60) << " dia(s)" << endl;

  // Remaining hours
  total %= 24 * 60 * 60;
  cout << total / (60 * 60) << " hora(s)" << endl;

  // Remaining minutes
  total %= 60 * 60;
  cout << total / 60 << " minuto(s)" << endl;

  // Remaining seconds
  total %= 60;
  cout << total << " segundo(s)" << endl;

  return 0;
}
