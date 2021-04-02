#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
int first_index;
	int ans =0;
	for(int i=0;i<m;i++)
		if(ar[0][i]==1)
		{
			first_index = i;
			break;
		
		}	
			
			
	for(int i=1;i<n;i++)
	{
		if(ar[i][first_index]==1)
		{
		    int old_index = first_index;
			while(ar[i][first_index]==1)
			{
			    if(first_index==0)
			    {
			        break;
			    }
				first_index--;
			}
		    if(old_index!=first_index)
		    {
		        ans = i;
		    }
		}
	}
	
	cout<<ans;
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



