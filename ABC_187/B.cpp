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
// RX162865852DE
bool comp(int a,int b)
{
	return (a<b);
	// cout<<min({a,b,c,d},comp)<<endl;
}

int main(void)
{
	fast();
	int n;
	cin>>n;
	vector<pair<double,double> > v;
	for(int i=0;i<n;i++)
	{
		double x,y; cin>>x>>y;
		v.pb(mk(x,y));
	}	

	int ans = 0;

	for(int i=0;i<v.size;i++)
	{
		for(int j=i+1;j<v.size;j++)
		{
			double val = (v[j].ss - v[i].ss ) / (v[j].ff - v[i].ff);
			// cout<<val<<endl;

			if(val >= -1 && val<=1)
			{
				ans++;
			}
		}
	}
	cout<<ans<<endl;
}