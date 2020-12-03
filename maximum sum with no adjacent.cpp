/*
	https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/
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
	
	int a[n];
	arin(a,n);
	
	int incl = a[0];
	int excl = 0;
	int excl_new;
	
	for(int i=1;i<n;i++)
	{
		excl_new = (incl>excl)? incl : excl;
		
		incl = excl + a[i];
		
		excl = excl_new;
	}
	
	cout<<max(incl,excl);
	
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



