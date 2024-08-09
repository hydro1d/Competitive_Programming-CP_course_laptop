#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	int sum = 0;
	int count = 0;
	for(int j = 0;j<tc-1;j++){
		int a;
		cin>>a;
		count = count + a;
	}
	

	for(int i = 1;i<=tc;i++){
		sum +=i;
	}
	cout<<sum-count<<endl;


}