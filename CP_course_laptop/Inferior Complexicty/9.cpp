#include<bits/stdc++.h>
using namespace std;
char s[105];
int main()
{
	cin.getline(s,105);

	char p[105];
	int n = strlen(s);

	
	for(int i =0;i<n;i++)
	{
		p[i]=s[i];
	}

	int j =0;
	for(int i=n-1;i>=0;i--)
	{
		s[j]=p[i];
		j++;
	}
	cout<<s<<endl;
}