#include<bits/stdc++.h>
using namespace std;
int checkbit(int n,int k){
	return (n>>k) & 1;
}
void onbit (int n){
	for(int k =0;k<32;k++){
		if (checkbit(n,k) ){
			cout<<k<<" ";
		}
		cout<<endl;
	}
}
int cntonbit (int n){
	int ans = 0;
	for(int k =0;k<32;k++){
		if (checkbit(n,k)){
			ans++;
		}
		
	}
	return ans;
}
int main()
{
	cout<<cntonbit(11)<<endl;
}