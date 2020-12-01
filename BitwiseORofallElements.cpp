/*
	bitwise or of all elemenets of a all sub array in the given array
	
	https://www.geeksforgeeks.org/sum-of-bitwise-or-of-all-subarrays-of-a-given-array-set-2/
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
	
	int ar[n];
	arin(ar,n);
	
	int max_el = *max_element(ar,ar+n);
	
	int maxbit = log2(max_le)+1;
	
	int total_sub = n*(n+1)/2;
	
	int s=0;
	
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



