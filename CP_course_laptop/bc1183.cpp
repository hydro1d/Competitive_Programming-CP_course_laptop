// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
	
// 	double arr[12][12];
// 	float sum=0.0;

// 	char x;

// 	cin>>x;

// 	for(int i = 0;i<12;i++){
// 		for(int j = 0;j<12;j++){
// 			cin>>arr[i][j];
// 		}
// 	}

// 	for(int i = 0;i<12;i++)
// 		for(int j = i+1;j<12;j++)
// 			sum = sum + arr[i][j];
// 		if(x =='S') cout<<sum<<endl;
// 		else if (x == 'M') cout<< fixed << setprecision(1)<<sum/66.0<<endl;
	

// 	return 0;	
	
// } ager ta 1183 nicher ta 1184 

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	double arr[12][12];
	float sum=0.0;

	char x;

	cin>>x;

	for(int i = 0;i<12;i++){
		for(int j = 0;j<12;j++){
			cin>>arr[i][j];
		}
	}

	for(int i = 0;i<12;i++)
		for(int j = 0;j<i;j++)
			sum = sum + arr[i][j];
		if(x =='S') cout<<sum<<endl;
		else if (x == 'M') cout<< fixed << setprecision(1)<<sum/66.0<<endl;
	

	return 0;	
	
}
