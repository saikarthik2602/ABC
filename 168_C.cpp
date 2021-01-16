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
// cout << fixed << setprecision(1) <<pi<<endl
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
#define ld  double
void fast(){ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);}


int main(void)
{
	fast();
	ld a,b,c,d;
	cin>>a>>b>>c>>d;
	ld ans = 0.0;
	ld x = (c*30)+(d*0.5);
	ld y = d*6;
	ld pi = acos(-1.0);
	ans = (ld)(a*a)+(ld)(b*b)-(2*a*b*cos((x-y)*(pi/180.0)));
	cout<<fixed<<setprecision(20)<<sqrt(ans)<<endl;
}

// C - : (Colon)
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	double A,B,H,M; cin>>A>>B>>H>>M;
// 	double h_deg, m_deg, deg, rad, c2;
// 	double PI = acos(-1);
// 	// 時針:30度/1時間 0.5度/1分
// 	h_deg = H*30 + M*0.5; // H時M分後の時針の角度(deg)
// 	// 分針:6度/1分
// 	m_deg = M*6; // M分後の分針の角度(deg)
// 	deg = h_deg - m_deg;
// 	rad = deg * PI / 180;
// 	c2 = A*A + B*B - 2*A*B*cos(rad);
// 	cout<<setprecision(20)<<fixed<< sqrt(c2) <<endl;
// }


