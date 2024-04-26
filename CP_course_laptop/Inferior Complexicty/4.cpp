// kth bit ta on kora lagbe

#include<bits/stdc++.h>
 using namespace std;
 int set_on(int n,int k){

 	// oto tomo bit ta 1 hoye jabe or on hobe
 	return n|(1<<k);
 	
 	
 }
 int set_off(int n,int k){

 	//oto tomo bit ta 0 hoye jabe or off hbe
 	
 	return n & (~(0<<k));
 }

 int main()
 {
 	cout<<set_on(11,2)<<endl;
 	cout<<set_off(11,2)<<endl;


 	return 0;
 }