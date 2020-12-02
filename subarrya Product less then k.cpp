#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
	int n,k;
	cin>>n>>k;
	
	int arr[n];
	arin(arr,n);
	
	int start = 0, end = 0,count = 0, sum = arr[0]; 
	while (start < n && end < n) { 
		if (sum < k) { 
			end++; 
			if (end >= start) 
				count += end - start; 
			if (end < n) 
				sum *= arr[end]; 
		}
		else { 
			sum /= arr[start]; 
			start++; 
		} 
	} 

	cout<<count<<"\n"; 
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



