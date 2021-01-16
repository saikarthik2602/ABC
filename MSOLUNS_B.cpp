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
	int r,g,b;
	cin>>r>>g>>b;
	int k;
	cin>>k;
	int a[3];
	a[0]=b;
	a[1]=g;
	a[2]=r;
	while(k>0)
	{
		if(a[0]>a[1] && a[1]>a[2])
		{
			break;
		}

		int x = min(a[0],a[1]);

		int y = min(a[1],a[2]);

		if(x==a[0])
		{
			a[0]=a[0]*2;
			k--;
		}	
		else if(y==a[1])
		{
			a[1]=a[1]*2;
			k--;
		}
	}

	if(a[0]>a[1] && a[1]>a[2])
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		// cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
		cout<<"No"<<endl;
	}
}