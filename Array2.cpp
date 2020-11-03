#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;
//total comparisions 3n/2-2 in 
using namespace std;

struct m{
	int min;
	int max;
};


struct m get_minmax(int ar[],int n)
{
	struct m ans;
	int i;
	
	if(n%2==0)
	{
		if(ar[0]>ar[1])
		{
			ans.min = ar[1];
			ans.max = ar[0];
		}
		else
		{
			ans.min = ar[0];
			ans.max = ar[1];
		}
		
		i=2;
	}
	else
	{
		ans.min = ar[0];
		ans.max = ar[0];
		i=1;
	}
	
	
	
	while(i<n-1)
	{
		if(ar[i]>ar[i+1])
		{
			if(ar[i]>ans.max)
			{
				ans.max = ar[i];
			}
			
			if(ar[i+1]<ans.min)
			{
				ans.min = ar[i+1];
			}
		}
		else
		{
			if(ar[i]<ans.min)
			{
				ans.min = ar[i];
			}
			
			if(ar[i+1]>ans.max)
			{
				ans.max = ar[i+1];
			}
		}
		
		i+=2;
	}
	
	return ans;
}

void solve()
{
	int n;
	cin>>n;
	
	int ar[n];
	for(int i=0;i<n;i++)cin>>ar[i];
	
	m ans = get_minmax(ar,n);
	
	cout<<ans.min<<" "<<ans.max;
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



