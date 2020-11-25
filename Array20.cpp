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
	bool ans = false;
	unordered_map<int,bool> map;
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum+= ar[i];
		if(!map[sum])
		{
			map[sum]=true;
		}
		else
		{
			ans = true;
		}
	}
	
	if(ans || map[0])
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
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



