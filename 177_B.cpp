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


int func(string &pre,string &t)
{
	int ans = 0;
	for(int i=0;i<pre.size;i++)
	{
		if(t[i]!=pre[i])
		{
			ans++;
		}
	}
	return ans;
}

int main(void)
{
	fast();

	/*
	string p = "HELLO_WORLD";
	string l = p.substr(1,1+6);
	cout<<l<<endl;
	*/

	string s,t;
	cin>>s>>t;

	int fans = INT_MAX;
	
	for(int i=0;i<=s.size-t.size;i++)
	{
		string pre = s.substr(i,(t.size));
		int x = func(pre,t);
		fans = min(fans,x);
	}	
	cout<<fans<<endl; 
}