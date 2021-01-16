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
	int x;
	cin>>x;
	if(x>=400 && x<=599)
	{
		cout<<8<<endl;
	}		
	if(x>=600 && x<=799)
	{
		cout<<7<<endl;
	}
	if(x>=800 && x<=999)
	{
		cout<<6<<endl;
	}
	if(x>=1000 && x<=1199)
	{
		cout<<5<<endl;
	}
	if(x>=1200 && x<=1399)
	{
		cout<<4<<endl;
	}
	if(x>=1400 && x<=1599)
	{
		cout<<3<<endl;
	}
	if(x>=1600 && x<=1799)
	{
		cout<<2<<endl;
	}
	if(x>=1800 && x<=1999)
	{
		cout<<1<<endl;
	}
}