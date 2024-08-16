#include<bits/stdc++.h>
using namespace std;

void rec(int l,int n){
	if(l>n){
		return;
	}

	cout<<l<<endl;

	rec(l+1,n);
}

int32_t main(){
	int n;
	cin>>n;
	rec(1,n);
}	