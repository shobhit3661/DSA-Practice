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
	
	int maxbit = log2(max_el)+1;
	
	int total_sub = n*(n+1)/2;
		
	int s=0;
	
	for(int i=0;i<maxbit;i++)
	{
		int temp=0;
		vector<int> index;
		int sum=0;
		
		for(int j=0;j<n;j++)
		{
			int a = ar[j]>>i;
			if(!(a&1))
			{
				index.pb(j);
			}
		}
		
		int subArrayNotSet =0;
		int cnt = 1;
		
		for(int j=1;j<index.size();j++)
		{
			if(index[j]-index[j-1]==1)
			{
				cnt++;
			}
			else
			{
				subArrayNotSet += cnt * (cnt+1)/2;
				cnt = 1;
			}
		}
		
		subArrayNotSet += cnt * (cnt+1)/2;
		
		if(index.size()==0)
		{
			subArrayNotSet = 0;
		}
		
		int count = total_sub-subArrayNotSet;
		
		s += count*pow(2,i);
		
	}
	
	cout<<s;
	
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



