#include<bits/stdc++.h>

using namespace std;

int main()
{
	pair<int,string>p;

	p={2,"sourabh"};

	cout<<p.first<<" "<<p.second<<endl;

	pair<int,int>a[3];

	a[0] ={1,5};
	a[1] ={2,9};
	a[2] = {4,7};

//pair diye swap korle puratar e swap hobe

	swap(a[0],a[2]);
	for(int i = 0; i<3;i++){
		cout<<a[i].first<<" "<<a[i].second<<endl;
	}

}

//intput output neya
// pair<int,string>z;
// cin>>z.first
// cout<<z.first<<endl;