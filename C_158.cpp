// #include <bits/stdc++.h>
// using namespace std;
// //cin.ignore();	// better to use 2 times getline(cin,s);
// // g++ iterator.cpp -std=c++17
// //cout << (A + B == C ? "YES" : "NO") << endl;
// #define pb push_back
// #define mk make_pair
// #define vll vector<ll>
// #define mll map<ll,ll >
// #define mlli map<ll,ll>::iterator
// #define size size()
// #define endl "\n"
// #define ll long long int
// #define ld long double
// void fast(){
//    	ios_base::sync_with_stdio(false);
//    	cin.tie(NULL);
//    	cout.tie(NULL);}


// int main(void)
// {
// 	fast();
// 	int a,b;
// 	cin>>a>>b;
// 	int flag=-1;
// 	for(int i=1;i<=1250;i++)
// 	{
// 		if(trunc(i*0.08)==a && trunc(i*0.1)==b)
// 		{
// 			flag=1;
// 			cout<<i<<endl;
// 			break;
// 		}
// 	}
// 	if(flag==-1)
// 	{
// 		cout<<-1<<endl;
// 	}
// }

















#include <bits/stdc++.h>
using namespace std;
//cin.ignore();	// better to use 2 times getline(cin,s);
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
  string s;
  cin>>s;
  int n;
  cin>>n;
while(n--)
{
	int a;
  cin>>a;
  if(a==1)
  {
      reverse(s.begin(),s.end());
  }
  else
  {
      int b;
      cin>>b;				
      char cb;
      cin>>cb;
      if(b==1)
      {
          s.insert(s.begin(),1,cb);
      }
      else
      {
          s.insert(s.end(),1,cb);
      }
  }

}
cout<<s<<endl;
}







// a
// 4
// 2 1 p
// 1
// 2 2 c
// 1
