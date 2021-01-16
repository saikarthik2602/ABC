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
	ll a,b,n;
	cin>>a>>b>>n;
	ll ans;
	// v.v imp ques using functions...
	//  best in the editorial
	if(b-1>=n)		
	{
		 ans = floor((a*n)/b)-a*floor(n/b);
	}
	else if(n>b-1)
	{
		 ans = floor(((a)*(b-1))/b)-a*floor((b-1)/b);
	}
	cout<<ans<<endl;

	// write  the given equation in function terminology
	// after that you can see that f(x+b) = f(x);
	// that means the values that are greater than or equal to b are.
	// gives the value x.
}