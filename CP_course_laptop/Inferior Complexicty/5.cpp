//toggle k th bit. on thakle off and off 
//thakle on.

#include<bits/stdc++.h>
 using namespace std;
 

int normal_bit(int n , int k){

	return (n<<k)& 1;
}



int toggle_bit(int n, int k){

	return (n ^ (1<<k));
}


 int main()
 {
 	
 	cout<<"Normal bit"<<endl;
 	cout<<normal_bit(11,2)<<endl;

 	cout<<"after toggle now bit"<<endl;
 	cout<<toggle_bit(11,2)<<endl;


 	return 0;
 }