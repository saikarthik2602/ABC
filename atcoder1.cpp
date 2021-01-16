#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int p,q;
  cin>>p>>q;
  if(p==q || p>q)
  {
    int x=0;
    for(int i=0;i<p;i++)
    {
      x = (x*10)+q; 
    }
    cout<<x<<endl;
  }
  else
  {
    int x=0;
    for(int i=0;i<q;i++)
    {
      x=(x*10)+p;
    }
    cout<<x<<endl;
  }
}