#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void fast()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
}
int main(void)
{
	fast();
    ll int n,k;
    cin>>n>>k;
    // ll int p[n];
    vector<ll int> v;
    for(ll int i=0;i<n;i++)
    {
        ll t;
        cin>>t;
        v.push_back(t);
    }
     if(k>=n)
    {
           cout<<0<<endl;
    }
   /*( else if(k==0)
    {
        int sum=0;
        for(ll int i=0;i<p.size();i++)
        {
            sum=sum+p[i];
        }
        cout<<sum<<endl;
    }
    */
    else
    {
        sort(v.begin(),v.end());
        ll int sum2=0;
        ll int qw=n-k;
        for(ll int j=0;j<qw;j++)
        {
          sum2=sum2+v[j];   
        }
        cout<<sum2<<endl;
    }
}