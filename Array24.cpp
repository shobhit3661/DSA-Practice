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
	cin>>n>>k;
	int ar[n];
	arin(ar,n);
	
	unordered_map<int,int> m;
	
	for(int i=0;i<n;i++)
	{
		m[ar[i]]++;
	}
	
	for(auto i : m)
	{
		if(i.second>x)
		{
			cout<<i.first<<"\n";
		}
	}
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



