#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,y;
	a= 1; 
	b= 5;

	y= a^b;
	cout<<y<<endl;
	cout<<(1|6)<<endl;
	cout<< (5 & 7)<<endl;
	cout<<(~-10)<<endl; // bitwise e operator deya lage

//left shift
	int x=3;
	cout<<"left shift "<<(x<<1)<<endl;// 3 er binary theke left
	//er dike ekbar shift holo tahole hoi 6
//right shift
	int z= 3;
	cout<<"right shift "<<(z>>1)<<endl;
	return 0;

}
//note that
// x<<1 = x*2
// x<<2= x*2*2

//x>>1 = x/2
//x>>2 =x/2