#include<bits/stdc++.h>
using namespace std;
const int N = 2e6+10;
int a[N];
int hp[N];
int canRemove[N];
int hsh[N]; //ekta number present ase naki nai

vector<int>distinctPF(int y){
	vector<int>ans;
	while(y>1){
		int pf;
		pf = hp[y];
		while(y%==0) y = y/pf;
		ans.push_back(pf);
	}
	return ans;
}


int32_t main(){
 for(int i = 1; i<N;i++){
 	if(hp[i]==0){
 		for(int j = i;j<N;j=j+i){
 			hp[j]=i;
 		}
 	}
 }

 int n,q;
 cin>>n>>q;
 for(int i = 0; i<n;i++){
 	int x;
 	cin>>x;
 	hsh[i]=1;
 }
//etotuku bujchi baki jani na(next hocche num je present oita mark )
 while(q--){
 	int x;
 	cin>>x;
 	vector<int>pf = distinctPF(x);
 	bool isPosible = false;

 	for(int i = 0;i<pf.size();i++){
 		for(int j = i;j<pf.size();j++){
 			//duibar ase naki prime ota check
 			int product = pf[i] * pf[j];
 			if(i==j && x%product != 0) continue;
 			//jodi x ta product e convert korte hoi
 			int toRemove = x/product;
 			if(canRemove[toRemove] == 1){
 				isPosible = true;
 				break;
 			}

 		}
 		if(isPosible) break;
 	}
 	cout<<(isPosible?"YES\n":"NO\n");
 }

}