//c++ 11 er porer gulaa use kora lagbe

//short kora jai code
//iterator use kora lage na

#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v={1,3,7,8};
for(int i = 0;i< v.size();i++){
	cout<<v[i]<<" ";
}
cout<<endl;

//iterator use kora lage na
for(int value : v){
	cout<<value<<" ";
}
cout<<endl;


vector< pair<int,int> >v_p={{1,2},{2,4},{4,6}};
for(auto &value :v_p){
	cout<<value.first<<" "<<value.second<<endl;
}
auto a =1.0; 
cout<<a<<endl;
}
