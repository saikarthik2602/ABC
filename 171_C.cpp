#include <bits/stdc++.h>
#include <fstream>
#include <cstdio>
using namespace std;
// vector<pair<int,int> > v;
// cin.ignore();//twice getline(cin,s);
// g++ iterator.cpp -std=c++17
// cout<<(A + B == C ? "YES" : "NO")<<endl;
// __gcd(a,b)
// string s=to_string(n);
// string p=s.substr(0,len);
// string q=s.insert(0,str);
// sort(arr, arr+n, greater<int>());
// cout<<fixed<<setprecision(9)<<pi<<endl
// const  double pi = acos(-1.0);
#define ff first
#define ss second
#define pb push_back
#define mk make_pair
#define vll vector<ll>
#define mll map<ll,ll >
#define mlli map<ll,ll>::iterator
#define size size()
#define endl "\n"
#define ll long long int
#define ld long double
void fast(){ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);}


int main(void)
{
	
	fast();

	ll n;
	cin>>n;

	
	ll a[n+1];

	ll s=0;

	unordered_map<ll,ll> m;

	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
		s=s+a[i];
		m[a[i]]++;
	}
	ll q;
	cin>>q;
	while(q--)
	{
		ll p;
		ll q;
		cin>>p>>q;
		auto it = m.find(p);
		s=s-((p)*(it->ss));
		s=s+((q)*(it->ss));
		m[p] = 0;
		// cout<<m[p]<<endl;
		
		auto it2=m.find(q);

		ll x;

		if(it2==m.end())
		{
			 x = (it->ss);	
		}
		else
		{
			 x = (it2->ss)+(it->ss);
		}
		for(ll i=0;i<x;i++)
		{
			m[q]++;
		}
		
		// cout<<m[q]<<endl;
		
		cout<<s<<endl;
	}
}