// #include <iostream>

// using namespace std;

// int main() {
//   int i, j;
//   float a[12][12], s = 0.0, m = 0.0, x = 0.0;
//   char c;

//   cin >> c;

//   for (i = 0; i < 12; i++) {
//     for (j = 0; j < 12; j++) {
//       cin >> a[i][j];
//       if (j < (11 - i) && i != 11) s += a[i][j], m++;
//     }
//   }

//   if (c == 'S') cout << fixed << setprecision(1) << s << endl;
//   else if (c == 'M') cout << fixed << setprecision(1) << s / m << endl;

//   return 0;
// } this is 1185 and now 1186

#include <bits/stdc++.h>

using namespace std;

int main() {
  int i, j;
  double M[12][12];
  char o;
  double sum = 0.0;

  cin >> o;

  for (i = 0; i < 12; i++) {
    for (j = 0; j < 12; j++) {
      cin >> M[i][j];
    }
  }

  for (i = 12-1; i >= 0; i--) {
    for (j = i + 1; j < 12; j++) {
      sum += M[i][j];
    }
  }

  if (o == 'S') {
    cout << fixed << setprecision(1) << sum << endl;
  } else if (o == 'M') {
    cout << fixed << setprecision(1) << sum / 66.0 << endl;
  }

  return 0;
}

