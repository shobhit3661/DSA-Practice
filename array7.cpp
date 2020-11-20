#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void get_rotate(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		swap(a[i],a[i+1]);
	}
}

void solve()
{
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	
	get_rotate(a,n);
	for(int i=0;i<n;i++)cout<<a[i];
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



