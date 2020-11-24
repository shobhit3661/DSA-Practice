#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void solve()
{
	int n;
	cin>>n;
	
	int ar[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>ar[i][j];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			swap(ar[i][j],ar[j][i]);	
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n/2;j++)
		{
			swap(ar[i][j],ar[][]);
		}
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



