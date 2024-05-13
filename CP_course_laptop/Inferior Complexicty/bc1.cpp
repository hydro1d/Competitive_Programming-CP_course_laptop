#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,p0,p1,p2,p3;
	cin>>a>>b>>c;

	 p0 =(b*b-(4*a*c)); 
	 p1=sqrt(b*b-(4*a*c));

	 p2= ((-b+p1)/(2*a));
     p3= ((-b-p1)/(2*a));

     if(p0<0||a==0||b==0||c==0){
     	cout<<"Impossivel calcular"<<endl;
     }
     else {
     	     cout<<fixed<<setprecision(5)<<"R1 = "<<p2<<endl;
     		 cout<<fixed<<setprecision(5)<<"R2 = "<<p3<<endl;

     }


	return 0;
}