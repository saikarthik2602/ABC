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
		ll x;
		cin>>x;
		ll c=0;
		ll an = 100;
		while(1)
		{
			if(an<x)
			{
				// an=an+(an*0.01);
				an=an+(an*double(double(1)/double(100)));
				c++;
			}
			else
			{
				break;
			}
		}
	    cout<<c<<endl;
	    return 0;
	}