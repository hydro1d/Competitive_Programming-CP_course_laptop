#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+9;
int main()
{
	int n;
	cin>>n;
	int a[N];
	for(int i =0;i<n;i++){
		cin>>a[i];
	}

	bool palindrom = true;

	for(int i = 0;i<n;i++){
		int j = n-i-1;
		if(a[i] != a[j]){
			palindrom = false;
			break;
		}
	}
	if(palindrom){
		cout<<"YES"<<endl;
	}
	else {cout<<"NO"<<endl;}

	return 0;

}