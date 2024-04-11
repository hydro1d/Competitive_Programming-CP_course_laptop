#include <bits/stdc++.h>
// #include "MyLib.h"
using namespace std;
using ll = long long;
ll I, i, j, k, l, a, b, c, x, y;
#define ll_MAX LLONG_MAX
#define ll_MIN LLONG_MIN
#define f1(I,t,b) for((I) = (0);(I) < (t);(I)+=(b))
#define f2(I,a,t,b) for((I) = (a);(I) < (t);(I)+=(b))
#define d_ll(n) ll n;cin>>n;
#define d_string(s) string s;cin>>s;
#define d_float(n) float n;cin>>n;
#define d_double(n) double n;cin>>n;
#define d_llArray(a,n) ll a[n];f1(i,n,1){cin>>a[i];}
#define d_floatArray(a,n) float a[n];f1(i,n,1){cin>>a[i];}
#define d_doubleArray(a,n) double a[n];f1(i,n,1){cin>>a[i];}

int main()
{
    d_ll(t)
    f1(I,t,1)
    {
        d_ll(n)
        d_llArray(a,n)
        ll e = 0;
        ll p[n];
        ll curr_mex = n;
        for(ll i = n - 1;i >= 0;i--)
        {
            if(a[i] > 0)
            {
                p[i] = (curr_mex - a[i]);
                curr_mex = p[i];
            }
            else
            {
                p[i] = (curr_mex + abs(a[i]));
            }
        }
        f1(i,n,1)
        {
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
}
