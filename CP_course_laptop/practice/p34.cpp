#include <iostream>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    int a[n][n];

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

   //change row
    for (int j = 0; j < n; j++) {
        swap(a[x-1][j], a[y-1][j]);
    }
    //change column
    for (int i = 0; i < n; i++) {
        swap(a[i][x-1], a[i][y-1]);
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
