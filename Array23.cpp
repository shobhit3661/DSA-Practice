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
	int ans = INT_MIN;
	unordered_set<int> s;
	
	for(int i=0;i<n;i++)
	{
		s.insert(ar[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		if(s.find(ar[i]-1)==s.end())
		{
			int j = ar[i];
			while(s.find(j) != s.end())
			{
				j++;
			}
			
			ans = max(ans,j-ar[i]);
		}
	}
	
	cout<<ans;
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



