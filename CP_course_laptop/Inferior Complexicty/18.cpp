#include<bits/stdc++.h>

using namespace std;
int main()
{
 int n,s;
 cin>>n>>s;
 int a[n];
 for(int i =0;i<n;i++){
 	cin>>a[i];
 }
bool found = false;

 for(int mask=0;mask<(1<<n);mask++){
 	int sum = 0;
 	for(int i= 0;i<n;i++){
 		if((mask>>i)&1){
 			sum = sum+a[i];
 		}
 	}
 	if(sum==s){
 		found = true;
 		break;
 	}

 }

 if(found){
 	cout<<"Yes"<<endl;
 }
 else{cout<<"No"<<endl;}

return 0;
}