#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void fast(){ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);}

int cost(vector<int> &v1,vector<vector<int> > &v,int x)
{
	vector<ll> ans(v[0].size(),0);
	for(int i=0;i<v.size();i++)
	{
		if(v1[i]!=0)
		{
			for(int j=0;j<v[0].size();j++)
			{
				ans[j] = ans[j]+v[i][j];
			}
		}
	}
	ll cost1 = -1;
	for(int i=1;i<ans.size();i++)
	{
		if(ans[i]<x)
		{
			return cost1;
		}
	}
	return ans[0];
}

vector<int> to_binary(int i,int n)
{
	int cnt = n-1;
	vector<int> t(n,0);
	while(i>0)
	{
		int x = i%2;
		t[cnt] = x;
		i = i/2;
		cnt--;
	}
	return t;
}

int main(void)
{
	fast();
	int n,m,x;
	cin>>n>>m>>x;

	vector<vector<int> > v;

	for(int i=0;i<n;i++)
	{
		vector<int> dummy;
		for(int j=0;j<m+1;j++)
		{
			int x1;
			cin>>x1;
			dummy.push_back(x1);
		}
		v.push_back(dummy);
	}
	int r = (1<<n)-1;
	int mini = INT_MAX;
	for(int i=1;i<=r;i++)
	{
		vector<int> v1;
		v1 = to_binary(i,n);
		int xy = cost(v1,v,x);
		if(xy!=-1)
		{
			mini = min(xy,mini);
		}
	}
	if(mini == INT_MAX)
	{
		cout<<-1<<endl;
	}
	else
	{
		cout<<mini<<endl;
	}
}