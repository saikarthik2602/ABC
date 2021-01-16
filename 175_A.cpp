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

	/*
	string s;
	cin>>s;
	int maxi = 0;
	int curr = 0;

	for(int i=0;i<s.size;i++)
	{
		if(s[i]=='R' && curr==0)
		{
			curr=1;
			maxi = max(curr,maxi);
		}
		else if(curr!=0)
		{
			if(s[i]=='R')
			{
				curr++;
				maxi=max(curr,maxi);
			}
			else
			{
				curr=0;
			}
		}
	}	
	cout<<maxi<<endl;
	*/

	string s;
	cin>>s;
	int ans=0;
	int curr=0;

	// Simple code.

	for(int i=0;i<s.size;i++)
	{
		if(s[i]=='R')
		{
			curr++;
			ans=max(curr,ans);
		}
		else
		{
			curr=0;
		}
	}
	cout<<ans<<endl;
}