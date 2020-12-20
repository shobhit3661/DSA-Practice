#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
	int n,m;
	cin>>n>>m;
	
	int ar[n];
	int ar2[m];
	
	arin(ar,n);
	arin(ar2,m);
	
	unordered_map<int,int> map;
	
	for(int i=0;i<n;i++)
	{
		map[ar[i]]++;
	}
	
	bool ans = true;
	for(int i=0;i<m;i++)
	{
		if(map[ar2[i]]>0)
		{
			map[ar2[i]]--;
		}
		else
		{
			ans = false;
			break;
		}
	}
	
	if(ans)
	{
		cout<<"YES"<<"\n";
	}
	else
	{
		cout<<"false";
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



