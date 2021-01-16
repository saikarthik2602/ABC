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


int __gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return __gcd(b % a, a); 
} 

int main(void)
{
	// did not got in the contest repeat.
	fast();
	int n;
	cin>>n;
	int c1=1,c2=1,c3=1;
	ll cnt=0;
	int flag = 0;
	while(c1+c2+c3!=3*n)
	{
		 int pq = __gcd(c2,c3); 
		 int s = __gcd(c1,pq);
		 if(c1==c2 && c2==c3 && c1==c3)
		 {
		 	cnt = cnt+s;
		 	c1++;
		 	// cout<<c1<<endl;
		 }
		 else
		 {
		 	// cnt = cnt+(s*3);
		 	// cout<<c2<<endl;
		 	// cout<<c3<<endl;
		 	if(flag==0)
		 	{
		 		c2++;
		 		flag=1;
		 	}
		 	else if(flag==1)
		 	{
		 		c3++;
		 		flag=0;
		 	}
		 	cnt = cnt+(s*3);
		 }
	}
	int pq = __gcd(c2,c3); 
	int s = __gcd(c1,pq);
	cnt=cnt+s;
	cout<<cnt<<endl;
}