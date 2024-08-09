//vector of vector concept
#include<bits/stdc++.h>
 using namespace std;
  
 void printVector(vector<int>&a){
    cout<<"size "<<a.size()<<endl;

    for(int i = 0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
 }


int main(){
   int N;
   cin >>N;

   vector< vector<int> >a; //baaler issue dekhis sourabh
   for(int i =0;i<N;i++){
      int n;
      cin>>n;
      vector<int> temp;
      for(int j =0;j<n;j++){
         int x;
         cin>>x;
         temp.push_back(x);

      }
      a.push_back(temp);
   }
   for(int i = 0;i<a.size();i++){
      printVector(a[i]);
   }
   cout<<a[0][1];

   return 0;
}  