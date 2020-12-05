#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
	string s,t;
	cin>>s>>t;
	
	int len = s.length();
	int len1 = t.length();
	
	int table[len+1][len1+1];
	
	for(int i=0;i<=len;i++)
	{
		for(int j=0;j<=len1;j++)
		{
			if(i==0)
			table[i][j]=j;
			
			else if(j==0)
				table[i][j]=i;
				
			else if(s[i-1]==t[j-1])
				table[i][j] = table[i-1][j-1];
				
			else
				table[i][j] = 1 + min(table[i][j-1],min(table[i-1][j],table[i-1][j-1]));
		}
	}
	
	cout<<table[len][len1];
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



