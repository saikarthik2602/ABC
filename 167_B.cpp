#include <bits/stdc++.h>
#include <fstream>
#include <cstdio>
using namespace std;
// vector<pair<int,int> > v;
// cin.ignore();//twice getline(cin,s);
// g++ iterator.cpp -std=c++17
// cout<<(A + B == C ? "YES" : "NO")<<endl;
// __gcd(a,b)
// string s=to_string(i);
// sort(arr, arr+n, greater<int>());
// const long double pi = acos(-1.0);
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
	ll a,b,c,k;
	cin>>a>>b>>c>>k;
	ll cnt = 0;
	if(k>0)
	{
		if(a>=k)
		{
			cnt = cnt+k;
			k = 0;
		}
		else if(a<k)
		{
			cnt = cnt+a;
			k = k-a;
		}
	}
	if(k>0)
	{
		if(b>=k)
		{
			k = 0;
		}
		else if(b<k)
		{
			k=k-b;
		}
	}
	if(k>0)
	{
		cnt = cnt-k;
		k = 0;
	}
	cout<<cnt<<endl;
	return 0;
}