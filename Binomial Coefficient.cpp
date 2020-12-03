#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{	
	int c,k;
	
	cin>>c>>k;
	
	int table[c+1][k+1];
	
	for(int i=0;i<=c;i++)
	{
		for(int j=0;j<=min(i,k);j++)
		{
			if(j==0 || j==i)
			{
				table[i][j]=1;
			}
			
			else
			{
				table[i][j] = table[i-1][j-1] + table[i-1][j];
			}
		}
	}
	
	cout<<table[c][k];
}

int main()
{
	fast;
	ll t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;
}



