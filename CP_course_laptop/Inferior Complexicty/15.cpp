#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--){
			
		int intro,ex,uni;
		cin>>intro>>ex>>uni;

		int ans= intro;
		int r= ex%3;
	if(r==0)
	{
		 ans+=ex/3;
		 if(uni%3==0) ans +=uni/3;
		 else ans +=uni/3+1;
		 cout<<ans<<endl;
	}

	else if(uni>=3-r)
	{
		ex += (3-r);
		uni -= (3-r);
		ans += ex/3;
		if(uni%3==0) ans+=uni/3;
		else ans += uni/3+1;
		cout<<ans<<endl;
	}
else cout<<"-1"<<endl;	
	}

}