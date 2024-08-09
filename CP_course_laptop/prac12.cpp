//beecrowd 1045
#include<bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double arr[3] = {a, b, c};
    sort(arr, arr+3);
    a = arr[2], b = arr[1], c = arr[0];

    if(a >= b + c) {
        cout << "NAO FORMA TRIANGULO"<<endl;
    } else {
        if(a*a == b*b + c*c) {
            cout << "TRIANGULO RETANGULO"<<endl;
        }
        if(a*a > b*b + c*c) {
            cout << "TRIANGULO OBTUSANGULO"<<endl;
        }
        if(a*a < b*b + c*c) {
            cout << "TRIANGULO ACUTANGULO"<<endl;
        }
        if(a == b && b == c) {
            cout << "TRIANGULO EQUILATERO"<<endl;
        }
        if(a == b && b != c || a == c && c != b || b == c && c != a) {
            cout << "TRIANGULO ISOSCELES"<<endl;
        }
    }

    return 0;
}
