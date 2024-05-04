#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc; 
    
    for (int i = 0; i <tc;i++) {

        int n,m;
        cin>>n>>m;
        string a1,a2;
        cin>>a1>>a2;
        int ans = 0;
        int k =0;
        for(int j =0; j<m && k<n;j++){
            if(a2[j]==a1[k]){
                ans++;
                k++;
            }
        }
        cout<<ans<<endl;

    }
    
}
