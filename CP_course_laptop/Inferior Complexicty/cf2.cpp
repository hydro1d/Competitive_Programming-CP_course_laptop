// #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// // 	int x;
// // 	cin>>x;
// // 	int sum =0;
// // 	for(int i = 0;i<=x;i++)
// // 	{

// // 		int c= (pow(-1,i)*i);

// // 		sum=sum+c;
// // 	}
// // cout<<sum<<endl;
	
	
// // }
// using namespace std;

// int main() {
//     int x;
//     cin >> x;
//     int sum = 0;
//     int sign = 1;
    
//     for (int i = 1; i <= x; i++) {
//         sum += sign * i;
//         sign *= -1;
//     }

//     cout << sum*(-1) << endl;
    
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long  n;
    cin >> n;

    if (n % 2 == 0) {
        cout << n / 2 << endl;
    } else {
        cout << -(n + 1) / 2 << endl;
    }

    return 0;
}
