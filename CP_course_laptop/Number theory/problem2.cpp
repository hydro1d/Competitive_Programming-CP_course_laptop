//hackerearth "Monk and divisor"
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+7;

int multi_count[N];
int hsh[N];// count hobe kotobar multiple
int32_t main()
{
	int tc;
	cin>>tc;
	for(int i =0;i<tc;i++){
		int x;
		cin>>x;
		//khela ekhane
		hsh[x]++; // element er count. jee 5 er koita ase ei type
	}
	//seive algo part
	for(int i = 1;i<N;i++){
		for(int j = i;j<N;j=j+i){
			multi_count[i] = multi_count[i]+hsh[j];
		}
	}

	int q;
	cin>>q;
	while(q--){
		int p,q;
		cin>>p>>q;

		long long lcm = (p * 1LL * q) / __gcd(p,q);
		long long ans = multi_count[p] + multi_count[q];
		if(lcm<N) ans = ans - multi_count[lcm];

		cout<<ans<<endl;

	}
}