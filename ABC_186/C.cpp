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

int check_deci(int &i)
{
	string pre = to_string(i);
	int x = pre.find('7');
	if(x==-1)
	{
		return -1;
	}
	return 1;
}

int check_oct(int &i)
{
	string ans = "";
	int present = i;
	while(present>0)
	{
		int rem = present % 8;
		present = present/8;
		ans+=to_string(rem);
	}
	// cout<<ans<<endl;
	// "ans" has the octal representation of the number in reverse order.
	int x = ans.find('7');
	if(x==-1)
	{
		return -1;
	}
	return 1;
}

int main(void)
{
	fast();
	int n;
	cin>>n;
	set<int> s;
	
	for(int i=1;i<=n;i++)
	{
		int ans1 = check_deci(i);
		if(ans1==1)
		{
			s.insert(i);
		}
		int ans2 = check_oct(i);
		if(ans2==1)
		{
			s.insert(i);
		}
	}

	cout<<n-s.size<<endl;
	/*
	int i = 560;
	int ans3 = check_oct(i);
	*/
}