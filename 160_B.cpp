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
	ll n;
	cin>>n;
	ll x = n;
	ll cnt = 0;
	int y;
	int z;
	int flag=-1;
	if(x>=500)
	{
		 y = x%500;
		 z = x/500;
		 cnt = cnt+(z*1000);
		 flag=1;
	}
	if(y>=5 && flag==1)
	{
		 cnt = cnt+((y/5)*5);
	}
	else if(flag==-1)
	{
		cnt = cnt + ((x/5)*5);
	}
	cout<<cnt<<endl;
}