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

// v v imp ques.
int main(void)
{
   fast();
   int n,m;
   cin>>n>>m;   // nc2+mc2;
   cout<<((n*n-1))/2+((m*m-1)/2);
}