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
	int n,m;
	cin>>n>>m;
	ll s=0;
	int a[m];
	for(int i=0;i<m;i++)
	{
	    cin>>a[i];
	    s=s+a[i];
	}
	if(n-s<0)
	{
	    cout<<-1<<endl;
	}
	else
	{
	    cout<<n-s<<endl;
	}
}
