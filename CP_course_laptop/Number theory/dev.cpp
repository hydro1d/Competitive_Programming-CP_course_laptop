#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

int32_t main(){

	vector<int>Divisor[N];

	for(int i = 2; i<N;i++){
		for(int j = i;j<N;j=j+i){
			Divisor[j].push_back(i);

		}
	}

		int num;
		cin>>num;
		for(int div:Divisor[num]){
			cout<<div<<" ";
		}
		cout<<endl; 
	
//nlog(n)

 return 0;
}