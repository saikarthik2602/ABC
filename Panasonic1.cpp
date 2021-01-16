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
 // 1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51
  // a[0]=1;
  // a[1]=1;
  // a[2]=1;
  // a[3]=2;
  // a[4]=1;
  // a[5]=2;
  // a[6]=1;
  // a[7]=5;          very huge mistake(think think)
  // a[8]=2;
  // a[9]=2;
  // a[10]=1;
  // a[11]=5;
  // a[12]=1;
  // a[13]=2;
  // a[14]=1;
  // a[15]=14;
  // a[16]=1;
  // a[17]=5;
  // a[18]=1;
  // a[19]=5;
  // a[20]=2;
  // a[21]=2;
  // a[22]=1;
  // a[23]=15;
  // a[24]=2;
  // a[25]=2;
  // a[26]=5;
  // a[27]=4;
  // a[28]=1;
  // a[29]=4;
  // a[30]=1;
  // a[31]=51;

    int a[32] = {1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51};
    int x;
    cin>>x;
    cout<<a[x-1]<<endl;

}