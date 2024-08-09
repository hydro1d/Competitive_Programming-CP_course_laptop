#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	double arr[12][12];
	float sum=0.0;

	int m;
	char x;

	cin>>m>>x;

	for(int i = 0;i<12;i++){
		for(int j = 0;j<12;j++){
			cin>>arr[i][j];
		}
	}

	for(int i = 0;i<12;i++)
		sum = sum + arr[i][m];
	if(x =='S') cout<<sum<<endl;
	else if (x == 'M') cout<< fixed << setprecision(1)<<sum/12.0<<endl;
	

	return 0;	
	
}