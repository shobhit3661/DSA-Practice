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
	
	bool table[n][n];
	memset(table,0,sizeof(table));
	int maxlen = 1;
	for(int i=0;i<n;i++)
		table[i][i] = true;
		
	int start = 0;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]==s[i+1])
		{
			table[i][i+1] = true;
			start = i;
			maxlen = 2;
		}
	}
	
	
	for(int i=3;i<=n;i++)//size of the string
	{
		for(int j=0;j<n-i+1;j++)//starting points of the string
		{
			//ending point of the string 
			int k = i+j-1;
			
			if(table[j+1][k-1] && s[j]==s[k])
			{
				table[i][j] = true;
				
				if(i>maxlen)
				{
					start = j;
					maxlen = i;
				}
			}
		}
	}
	
	cout<<maxlen<<"\n";
	cout<<s.substr(start,maxlen);
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



