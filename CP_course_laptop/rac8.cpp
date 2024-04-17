#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;

	for(int i = 0; ; i++)
	{
		if (a*i>c){
			break;
		}
	

	for(int j = 0; ; j++)
	{
		int t=((a*i)+(b*j));

		if(t==c)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		

		if(t>c){
			break;
		}
	}
}
cout<<"NO"<<endl;
return 0;
}