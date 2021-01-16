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


bool pali(string s)
{
	for(int i=0;i<s.size/2;i++)
	{
		if(s[i] == s[(s.size)-i-1])
		{
			// cout<<s[i]<<endl;
			// cout<<s[s.size-i-1]<<endl;
			// continue;
		}
		else
		{
			return false;
		}
	}
	return true;
}

int main(void)
{
   fast();
   string s;
   cin>>s;
   if(pali(s)==true && s.size%2==1)
   {

   string p = "";
   string q = "";
   int l = s.size;
   for(int i=0;i<(l-1)/2;i++)
   {
   	  p = p+s[i];
   }
      // cout<<p<<endl;   
   for(int i=((l+3)/2)-1;i<l;i++)
   {
   	  q = q+s[i];
   }
    // cout<<q<<endl;

    bool aps = pali(p);
    bool aps2 = pali(q);

   if(aps== true && aps2==true)
   {
   	  cout<<"Yes"<<endl;
   	  return 0;
   }
   else
   {
   	  cout<<"No"<<endl;
   	  return 0;
   }
}
	else 
	{
		cout<<"No"<<endl;
		return 0;
	}
}