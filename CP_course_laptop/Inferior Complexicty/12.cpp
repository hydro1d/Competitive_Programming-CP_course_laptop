#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,result;
    cin >> s;


///s.size means purata loop obdi cholbe
for(int i=0;i<s.size();i++){
	if (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
		
		i=i+2;
		cout<<" ";

	}
		
	else{
		cout<<s[i];
	}

	}
}
