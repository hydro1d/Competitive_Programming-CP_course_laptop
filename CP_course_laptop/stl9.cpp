//iterators process of cp
//pointers like structure
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v ={2,3,5,6};
	for(int i =0 ;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	vector<int> ::iterator it = v.begin();
	cout<<(*it)<<endl;
	//cout<<(*it+3)<<endl;

	vector<pair<int,int>>v_p = {{1,2},{3,5},{5,6 }}
}
// it ++ means next iterator
// it + 1 means next location
