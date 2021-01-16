#include <bits/stdc++.h>
#include <fstream>
#include <cstdio>
using namespace std;
// cin.ignore();//twice getline(cin,s);
// g++ iterator.cpp -std=c++17
// cout<<(A + B == C ? "YES" : "NO")<<endl;
// __gcd(a,b)
// string s=to_string(i);
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
    int n,m;
    cin>>n>>m;
    int a[n];
    int s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s = s+a[i];
    }
    double l = s/(4.0*m);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<l)
        {
            continue;
        }
        else
        {
            cnt++;
        }
        if(cnt==m)
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}