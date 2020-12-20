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
		
		int left[n];
		int right[n];
		left[0] = ar[0];
		for(int i=1;i<n;i++)
		{
			left[i] = max(left[i-1],ar[i]);
		}
		
		right[n-1] = ar[n-1];
		
		for(int i=n-2;i>=0;i--)
		{
			right[i] = max(right[i+1],ar[i]);
		}
		
		
		for(int i=0;i<n;i++)
		{
			water += min(left[i],rigth[i])-ar[i];
		}
		
		cout<<water;
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
	
	

