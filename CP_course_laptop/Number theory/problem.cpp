//hacker earth problem "UNlock the door"


// N! * KCN {KCN = K! / ((K-N)! * N!)}
#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;
const int N = 1e5+10;

int fact[N];
int binExp(int a,int b,int m){
	int ans = 1;
while(b>0){
	if(b & 1){
		ans = (ans *1LL* a)%m;
	}
	a = (a *1LL* a)%m;
	b>>=1;
}
	return ans;
}
// n size password, k  alphabet
int32_t main(){
 int tc;
 cin>>tc;
 fact[0] = 1;
 for(int i = 1;i<N;i++){
 	fact[i] = (fact[i-1] * 1LL * i) % MOD;
 }

 while(tc--){
 	int n,k;
 	cin>>n>>k;

	int ans1 = fact[n];

	ans1 = ( ans1 * 1LL * fact[k] ) %MOD;

	int den =  (fact[k-n] *1LL*fact[n] ) %MOD;

	ans1 =( ans1 * 1LL * binExp(den,MOD-2,MOD) ) %MOD;

	cout<<ans1<<endl;
	

 }


}