#include<iostream>
#include<string>
using namespace std;
int main(){
    int test;
    cin>>test;

    while(test--){
        int n;
        string s;
        cin>>n>>s;

        bool sobek = true;
        for (char l : s){
            if(l == '0'){
                sobek = false;
                break;
            }
        }
        if (sobek){
            cout<<"NO"<<endl;
            continue;

        }

        bool pacchi = false;
        for(int j = 0; j < n;j++){
            if (s[j] == '1' && (j == 0 || s[j -1] == '0' ) && (j == n-1 || s[j + 1]== '0')) {
                pacchi = true;
                break;
            }
        }

        if(pacchi){
            cout<<"YES"<<endl;
        }else{cout<<"NO"<<endl;}
    }
    return 0;
}