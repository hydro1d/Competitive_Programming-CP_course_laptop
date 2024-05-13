#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n,money_earned,new_salary;
	cin>>n;

	if(n>=0 && n<=400.00){

		money_earned = 0.15*n;
		new_salary= n + money_earned;

		cout<<"Novo salario: "<<fixed<<setprecision(2)<<new_salary<<endl;
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<money_earned<<endl;
		cout<<"Em percentual: "<<"15 %"<<endl;
	}

	else if(n>=400.01 && n<=800.00){

		money_earned = 0.12*n;
		new_salary= n + money_earned;

		cout<<"Novo salario: "<<fixed<<setprecision(2)<<new_salary<<endl;
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<money_earned<<endl;
		cout<<"Em percentual: "<<"12 %"<<endl;
	}

	else if(n>=800.01 && n<=1200.00){

		money_earned = 0.1*n;
		new_salary= n + money_earned;

		cout<<"Novo salario: "<<fixed<<setprecision(2)<<new_salary<<endl;
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<money_earned<<endl;
		cout<<"Em percentual: "<<"10 %"<<endl;
	}

	else if(n>=1200.01 && n<=2000.00){

		money_earned = 0.07*n;
		new_salary= n + money_earned;

		cout<<"Novo salario: "<<fixed<<setprecision(2)<<new_salary<<endl;
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<money_earned<<endl;
		cout<<"Em percentual: "<<"7 %"<<endl;
	}

	else if(n>=2000.01){

		money_earned = 0.04*n;
		new_salary= n + money_earned;

		cout<<"Novo salario: "<<fixed<<setprecision(2)<<new_salary<<endl;
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<money_earned<<endl;
		cout<<"Em percentual: "<<"4 %"<<endl;
	}
}