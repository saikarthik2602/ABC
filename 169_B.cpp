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
	ll a[n];
	ll ans = 1;
	ll left_lim=1;
	// ll maxi = 1000000000000000000;	// not a good practise.
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(ll i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			cout<<0<<endl;
			return 0;
		}
	}

	for(ll i=0;i<n;i++)
	{
		ans = (ans)*(a[i]);
		if(ans>(ll)1e18)   // imp type casting dgt.   
		{				   //  1e18  representation of 10^18.
			cout<<-1<<endl;
			return 0;
		}
		if(ans<left_lim)
		{
			cout<<-1<<endl;
			return 0;
		}
	}
	cout<<ans<<endl;
	return 0;
}