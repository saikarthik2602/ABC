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
void fast(){ios_base::sync_with_stdio(false);
   	cin.tie(NULL);
   	cout.tie(NULL);}


int main(void)
{
	fast();
	string s;
	cin>>s;
	int cnt=0;
	for(int i=0;i<s.size-1;i++)
	{
		if(s[i]=='h' && s[i+1]=='i')
		{
			cnt++;
		}
	}
	if(s.size%2==0 && cnt==s.size/2)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}


	// string hi="";
	// for(int i=1;i<=5;i++)
	// {
	// 	hi=hi+"hi";
	// 	if(hi==s)
	// 	{
	// 		cout<<"Yes"<<endl;
	// 		return 0;
	// 	}
	// }
	// cout<<"No"<<endl;
	// return 0;


	// if(s.size%2!=0)
	// {
	// 	cout<<"No"<<endl;
	// }
	// else
	// {
	// 	if(s.size==2)
	// 	{
	// 		if(s=="hi")
	// 		{
	// 			cout<<"Yes"<<endl;
	// 		}
	// 		else
	// 		{
	// 			cout<<"No"<<endl;			// too many lines of code(think...)
	// 		}
	// 	}
	// 	else if(s.size==4)
	// 	{
	// 		if(s=="hihi")
	// 		{
	// 			cout<<"Yes"<<endl;
	// 		}
	// 		else
	// 		{
	// 			cout<<"No"<<endl;
	// 		}
	// 	}
	// 	else if(s.size==6)
	// 	{
	// 		if(s=="hihihi")
	// 		{
	// 			cout<<"Yes"<<endl;
	// 		}
	// 		else
	// 		{
	// 			cout<<"No"<<endl;
	// 		}
	// 	}
	// 	else if(s.size==8)
	// 	{
	// 		if(s=="hihihihi")
	// 		{
	// 			cout<<"Yes"<<endl;
	// 		}
	// 		else
	// 		{
	// 			cout<<"No"<<endl;
	// 		}
	// 	}
	// 	else if(s.size==10)
	// 	{
	// 		if(s=="hihihihihi")
	// 		{
	// 			cout<<"Yes"<<endl;
	// 		}
	// 		else
	// 		{
	// 			cout<<"No"<<endl;
	// 		}
	// 	}
	// }
}