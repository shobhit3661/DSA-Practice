#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
	string s;
	cin>>s;
	
	int n = s.length();
	int table[n][n];
	
	for(int i=0;i<n;i++)
	{
		table[i][i] = 1;
	}
	
	for(int k=2;k<=n;k++)
	{
		for(int i=0;i<n-k+1;i++)
		{
			int j = i+k-1;
			if(s[i]==s[j] && k==2)
			{
				table[i][j]=2;
			}
			else if(s[i]==s[j])
				{
					table[i][j] = table[i+1][j-1]+2;
				}
				else
				{
					table[i][j] = max(table[i+1][j],table[i][j-1]);
				}
		}
	}
	
	cout<<table[0][n-1];
	
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



