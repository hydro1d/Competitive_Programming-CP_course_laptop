#include<bits/stdc++.h>
using namespace std;

int sum(int n){
	if(n==0) return 0;
	int res = sum(n-1)+n;
return res;
}




int main()
{
	cout<<sum(4)<<endl;
}