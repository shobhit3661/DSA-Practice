/*
	the second transaction can only start after the first one is complete (Sell->buy->sell->buy).
	
*/

#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
	int n;
	cin>>n;
	
	int ar[n];
	arin(ar,n);
	
	int k;
	cin>>k;
	
	int table[k+1][n+1];
	
	for(int i=0;i<=k;i++)
		table[i][0] = 0;
		
	for(int i=0;i<=n;i++)
		table[0][i] = 0;
		
	for(int i=1;i<=k;i++)
	{
	    int max_so_far = INT_MIN;
		for(int j=1;j<n;j++)
		{
			   max_so_far = max(max_so_far,table[i-1][j-1]-ar[j-1]);
		
		    table[i][j] = max(table[i][j-1],ar[j]+max_so_far);
		}
		    
	}
	
	cout<<table[k][n-1];
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



