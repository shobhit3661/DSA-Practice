#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void get_ans(int a[],int n)
{
	int ans = INT_MIN;
	int so_far = 0;
	
	for(int i=0;i<n;i++)
	{
		so_far = so_far + a[i];
		if(ans<so_far)
		{
			ans = so_far;	
		}
		
		if(so_far<0)
		{
			so_far=0;
		}
	}		
	
	cout<<ans<<" ";
}

void solve()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)cin>>ar[i];
	
	get_ans(ar,n);
}

int main()
{
	fast;
	ll t=1;
	cin>>t;
	while(t--)
		solve();
	return 0;
}



