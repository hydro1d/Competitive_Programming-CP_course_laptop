#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cin>>a>>b;

	c=a+(a-1);
	d=b+(b-1);
	e=a+b;

	if(c>e)
	{
		cout<<c<<endl;
	}
	else if(d>e)
	{
		cout<<d<<endl;
	}
	else if(c<e)
	{
		cout<<e<<endl;
	}
	else if (d<e)
	{
		cout<<e<<endl;
	}

}