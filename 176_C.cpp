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
// sort(v.rbegin(),v.rend());
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

	// ll maxi = INT_MIN;

	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		
		// maxi = max(maxi,a[i]);
	}

	ll ans = 0;

	for(ll i=1;i<n;i++)
	{
		if(a[i-1]>a[i])
		{
			ans = ans + (a[i-1]-a[i]);

			a[i]=a[i]+(a[i-1]-a[i]);
		}
	}

	cout<<ans<<endl;
}