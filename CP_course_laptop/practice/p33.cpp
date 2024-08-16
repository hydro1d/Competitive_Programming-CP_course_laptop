#include<iostream>
using namespace std;

long long power(int a, int b) {
  long long pow_count = 1;
  for (int i = 1; i <= b; i++) {
    pow_count *= a;
  }
  return pow_count;
}

long long solve(int x, int n) {
  long long sum = 0;
  for (int i = 0	; i <= n; i += 2) { 
    sum += power(x, i);
  }
  sum -= 1;
  return sum;
}
int main() {
  int x, n; 
  cin >> x >> n;
  cout << solve(x, n) << endl;
  return 0;
}