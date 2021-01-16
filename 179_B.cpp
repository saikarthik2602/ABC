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
	int n;
	cin>>n;

	int pre = 0;
	int flag = -1;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		if(a==b)
		{
			if(pre==0)
			{
				pre++;
			}
			else
			{
				pre++;
			}
			if(pre>=3)
			{
				flag=1;
			}
		}
		else
		{
			pre=0;
		}
	}

	if(flag==1)
	{
		cout<<"Yes"<<endl;
	}	
	else
	{
		cout<<"No"<<endl;
	}
}