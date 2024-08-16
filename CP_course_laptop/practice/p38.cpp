#include<bits/stdc++.h>
using namespace std;

void rec(int n){
	if(n==0){
		return;
	}

	cout<<n;
	if(n>1){
	cout<<' ';
	}

	rec(n-1);
}

int32_t main(){
	int n;
	cin>>n;
	rec(n);
	cout<<endl;
}