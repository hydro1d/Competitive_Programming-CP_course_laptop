#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, i, j;
    
    cin>>X>>Y; 
    
    for (i = 1; i <= Y; i++) {
        cout<<i; 
        
        if (i % X == 0 || i == Y) { 
            cout<<endl;
        } else {
            cout<<" ";
        }
    }
    
    return 0;
}
