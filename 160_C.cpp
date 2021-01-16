#include <bits/stdc++.h>
#include <fstream>
#include <cstdio>
using namespace std;
// cin.ignore();//twice getline(cin,s);
// g++ iterator.cpp -std=c++17
// cout<<(A + B == C ? "YES" : "NO")<<endl;
// __gcd(a,b)
// string s=to_string(i);
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
	int k,n;
	cin>>k>>n;
	int a[n];
	int flag = 1;
	ll s=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s = s+a[i];
		if(a[i]==0)
		{
			flag=-1;
		}
	}
	if(flag==-1)
	{
		sort(a,a+n);
		
	}
	else
	{
		cout<<(s/n)<<endl;
	}
}