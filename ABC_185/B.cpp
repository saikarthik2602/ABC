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

// javac -Xlint:deprecation FileName.java

int main(void){
	fast();
	int n,m,t;
	cin>>n>>m>>t;
	int max = n;
	int prev = 0;
	int flag=1;
	for(int i=0;i<m;i++){
		int a,b; cin>>a>>b;

		if(i==0){
			n=n-a;
			if(n<=0)
			{
				flag=-1;
			}
			if(n<max){
				n=n+(b-a);
				if(n>max)
				{
					n=max;
				}
			}
			prev = b;
		}
		else{
			n=n-(a-prev);
			if(n<=0){
				flag=-1;
			}
			prev = b;
			if(n<max){
				n=n+(b-a);
				if(n>max)
				{
					n=max;
				}
			}
		}
	}	
	n=n-(t-prev);
	if(flag==-1)
	{
		cout<<"No"<<endl;
	}
	else
	{
		cout<<(n>0 ? "Yes" : "No")<<endl;
	}
}