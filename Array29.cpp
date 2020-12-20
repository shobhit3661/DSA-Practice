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
	
	sort(ar,ar+n);
	
	int m;
	cin>>m;
	
	if(m>n)
	{
		cout<<"-1"<<"\n";
		return;
	}
	
	int ans = INT_MAX;
	
	for(int i=0;i+m-1<n;i++)
	{
		int dif = ar[i+m-1]-ar[i];
		ans = min(ans,dif);
	}
	
	cout<<ans<<"\n";
	
	
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



