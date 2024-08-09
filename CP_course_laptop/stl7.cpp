#include<bits/stdc++.h>
 using namespace std;
  
 void printVector(vector<int>&a){
    cout<<"size "<<a.size()<<endl;

    for(int i = 0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
 }


//array of vector concept
int main(){
   int N;
   cin >>N;

   vector<int>a[N];
   for(int i =0;i<N;i++){
      int n;
      cin>>n;
      for(int j =0;j<n;j++){
         int x;
         cin>>x;
         a[i].push_back(x);
      }
   }

   for(int i = 0;i<N;i++){
      printVector(a[i]);
   }
   cout<<a[0][1]<<endl;

   return 0;
}  