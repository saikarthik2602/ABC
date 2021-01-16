#include <bits/stdc++.h>
using namespace std;
//cin.ignore();//better to use 2 times getline(cin,s);
// g++ iterator.cpp -std=c++17
//cout<<(A + B == C ? "YES" : "NO")<<endl;
//__gcd(a,b)
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
	// Grand contest did not do 1 sum also. 
	// a  sum is to find the shortest path.
	fast();
	int h,w;
	cin>>h>>w;
	char a[h][w];
	int cnt=0;
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			cin>>a[i][j];
		}
	}

		if(a[0][0]=='#')
		{
			cnt++;
		}

		int xw=0; int wq=0;

	for(int i=0;i<h;i=i+xw)
	{
		for(int j=0;j<w;j=j+wq)
		{
			if(a[i][j+1]=='.' || a[i+1][j]=='.')
			{
				continue;
			}
			else
			{
				cnt++;
				if(a[i+1][j]=='#')
				{
					 xw = i+1;
					 wq = j;
				}
				else
				{
					xw = i;
				    wq = j+1;
				}
			}
		}
	}
	cout<<cnt<<endl;
}