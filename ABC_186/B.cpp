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

bool comp(int a,int b)
{
	return (a<b);
	// cout<<min({a,b,c,d},comp)<<endl;
}

int main(void)
{
	fast();
	
	int n,m; 
	cin>>n>>m;
	int a[n][m];
	int mini = INT_MAX;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			mini = min(mini,a[i][j]);
		}
	}	

	ll cnt = 0;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]!=mini)
			{
				cnt += a[i][j]-mini;
			}
		}
	}

	cout<<cnt<<endl;
}