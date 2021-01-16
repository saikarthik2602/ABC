#include <bits/stdc++.h>
using namespace std;
//cin.ignore(); // better to use 2 times getline(cin,s);
// g++ iterator.cpp -std=c++17
//cout << (A + B == C ? "YES" : "NO") << endl;
#define pb push_back
#define mk make_pair
#define vll vector<ll>
#define mll map<ll,ll >
#define mlli map<ll,ll>::iterator
#define size size()
#define endl "\n"
#define ll long long int
#define ld long double
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);}
 
 
int main(void)
{
  fast();
  ll n,a,b;
  cin>>n>>a>>b;
  if(a==0)
  {
      cout<<0<<endl;
  }
  else
  {
      cout<<a+(n%(a+b))<<endl;
  }

  
  // ll n,a,b;
  // cin>>n>>a>>b;
  // if(a==0)
  // {
  //     cout<<0<<endl;
  // }
  // else
  // {
  //     cout<<a+(n-a-b)<<endl;
  // }
}