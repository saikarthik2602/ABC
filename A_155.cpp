#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll   long long int
void fast()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
}

int main(void)
{
  fast();
  ll n;
  cin>>n;

  map<string,ll> m;
  ll ans=INT_MIN;
  for(ll i=0;i<n;i++)
  {
  	 string s;
  	 cin>>s;
  	 m[s]++;
  	 ans = max(ans,m[s]);
  }

  vector<string> v;

  for(auto it=m.begin();it!=m.end();it++)
  {
  		if(it->second==ans)
  		{
  			v.push_back(it->first);
  	
  		}
  }
  for(ll i=0;i<v.size();i++)
  {
  	string temp="";
  	if(v[i]>v[i+1])
  	{
  		temp = v[i];
  		v[i] = v[i+1];
  		v[i+1] = temp;
  	}
  }
  
  for(ll i=0;i<v.size();i++)
  {
      cout<<v[i]<<endl;
  }
}