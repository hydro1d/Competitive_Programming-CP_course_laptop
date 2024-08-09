#include<bits/stdc++.h>

using namespace std;

string deS(string s){

	reverse(s.begin(),s.end());
	return s;
}


int main()
{
	int numString;
	cin>>numString;

	cin.ignore();

	string enS;
	for(int i = 0;i<numString;i++){
		getline(cin,enS);

		string final_de_string = deS(enS);
		cout<<final_de_string<<endl;
	}

	return 0;
}