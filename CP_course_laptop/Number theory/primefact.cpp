#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>prime_fact;
	int n;
	cin>>n;

	for(int i = 2;i<=n;i++){
		while(n%i==0){
			prime_fact.push_back(i);
			n = n/i;
		}
	}

	//O(n)
	for(int prime: prime_fact){
		cout<<prime<<" ";
	}


}
