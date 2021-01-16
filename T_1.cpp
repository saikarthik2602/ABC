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
	ll a,v,b,w;
	cin>>a>>v>>b>>w;
	ll t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		if(a+v==b)
		{
			a=a+v;
			b=b+w;
		}
		else if(a+v!=b)
		{
			a=a+v;
		}
		if(a==b)
		{
			cout<<"YES"<<endl;
		}
		if(a>b)
		{
			break;
		}
	}
	cout<<"NO"<<endl;
}