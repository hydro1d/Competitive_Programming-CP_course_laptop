#include<bits/stdc++.h>
 using namespace std;
 int checkbit(int n ,int k){
 	return (n>>k)&1;
 }

 int countbit(int n){
 	int ans = 0;
 	for(int k=0;k<32;k++){
 		if(checkbit(n,k)){
 			ans++;
 		}
 		
 	}return ans;
 }

 bool check2power(int n){

 	return countbit(n)==1; 	
 }
 int main()
 {
 	cout<<check2power(16)<<endl;
 }