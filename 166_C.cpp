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
	int n,k;
	cin>>n>>k;
	int a[n];
	int b[n];
	int cnt=0;
	memset(b,0,sizeof(b));
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<k;i++)
	{
		int p,q;
		cin>>p>>q;
		if(a[p-1]>a[q-1])
		{
			b[q-1]=-1;
		}
		else if(a[p-1]<a[q-1])
		{
			b[p-1]=-1;
		}
		else if(a[p-1]==a[q-1])
		{
			b[p-1]=-1;
			b[q-1]=-1;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(b[i]==0)
		{
			cnt++;
		}
	}
	cout<<cnt<<endl;
}