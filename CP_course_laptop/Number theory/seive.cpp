#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+9;
vector<bool>is_prime(N,1);

int32_t main()
{   //where is_prime[i] will be true if i is a prime number and false otherwise. The indices 0 and 1 are set to false because 0 and 1 are not prime numbers.
	is_prime[0] = is_prime[1] = false;
	
	for(int i = 2; i<N;i++){
		if(is_prime[i]==true){
			for(int j = 2*i;j<N;j=j+i){
				is_prime[j] = false;
			}
		}
	}

	for(int i = 1; i<=20;i++){
		cout<<is_prime[i]<<endl;
	}

}