#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int>a){
	cout<<"size "<<a.size()<<endl;
	for(int i =0;i<a.size();i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}


int main()
{

	// push_back er kaj ekta ekta add kora pichon theke
	//pop_back er kaj ekta ekta bad deya pichon theke
	vector<int>a;

	a.push_back(6);
	printVector(a);
	a.push_back(8);
	printVector(a);
	a.push_back(5);
	printVector(a);
	a.push_back(9);
	printVector(a);
	a.pop_back();
	printVector(a);

	//vector<int> v2= v ; eta copy vector
}