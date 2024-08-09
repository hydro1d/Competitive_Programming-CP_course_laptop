#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int>a){
	
	cout<<"size  "<<a.size()<<endl;
	for(int i =0;i<a.size();i++){

		cout<<a[i]<<" ";

	}
	cout<<endl;
}
int main()
{
	vector<int>a;

	int n;
	cin>>n;
	for(int i = 0;i<n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	printVector(a);
}