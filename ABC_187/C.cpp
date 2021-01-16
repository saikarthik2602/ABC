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
// RX162865852DE
bool comp(int a,int b)
{
	return (a<b);
	// cout<<min({a,b,c,d},comp)<<endl;
}

int main(void)
{
	fast();
	int b;
	cin>>b;
	// vector<string> v;
	map<string,int> m1;
	map<string,int> m2;
	for(int i=0;i<b;i++)
	{
		string s;
		cin>>s; 
		// v.pb(s);
		if(s[0]=='!')
		{
			string p = s.substr(1,s.size);
			m1[p]++;
		}
		else
		{
			m2[s]++;
		}
	}	
	int flag = 1;
	for(auto it=m2.begin();it!=m2.end();it++)
	{
		string s = it->ff;
		auto it2 = m1.find(s);
		if(it2==m1.end())
		{

		}
		else
		{
			flag = -1;
			cout<<s<<endl;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"satisfiable"<<endl;
	}
}