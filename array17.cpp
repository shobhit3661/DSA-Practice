#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void solve()
{
	int n,sum;
	cin>>n>>sum;
	
	int ar[n];
	for(int i=0;i<n;i++)cin>>ar[i];
	
	unordered_map<int,int> map;
	
	for(int i=0;i<n;i++)
	{
		map[ar[i]]++;
	}
	
	int count=0;
	
	for(int i=0;i<n;i++)
	{
		count += map[sum-ar[i]];
		
		if(sum-ar[i]==ar[i])
		{
			count--;
		}
	}
	
	cout<<count/2;
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



