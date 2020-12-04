#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void solve()
{
	int n,m;
	cin>>n>>m;
	
	int ar[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>ar[i][j];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<m;j++)
		{
			swap(ar[i][j],ar[j][i]);	
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<ar[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	int k = n-1;
	for(int i=0;i<n/2;i++)
	{
		for(int j=0;j<m;j++)
		{
			swap(ar[k][j],ar[i][j]);
		}
		k--;
	}
	
}

int main()
{
	fast;
	ll t=1;
//	cin>>t;
	while(t--)
		solve();
	return 0;
}



