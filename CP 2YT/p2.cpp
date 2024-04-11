#include<iostream>
#include<string>
using namespace std;
int main() {
    int test;
    cin >> test; 
    
    while (test--) {
        int n;    
        string l;
        cin >>n>>l;
        
        int motlp = 0; 
        
        for (int j = 0; j < n; j++) {
            if (l[j] == '1') {
                ++motlp;
            }
        }
        
        if (motlp % 2 != 0) { 
            cout <<"NO"<<endl;
            continue;
        }
        
        bool pacchi = true;
        
        if (motlp == 2) { 
            for (int j = 0; j < n - 1; j++) {
                if (l[j] == '1' && l[j+1] == '1') {
                    pacchi = false;
                    break;
                }
            }
        }
        
        if (pacchi) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}