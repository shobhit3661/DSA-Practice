#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void debug(int ar[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
	cout<<"\n";
}

void getMinimumSteps(int ar[],int n)
{
	int table[n];
	memset(table,0,sizeof(table));
	table[0] = 0;
	
	for(int i=1;i<n;i++)
	{
		table[i]=INT_MAX;
		for(int j=0;j<i;j++)
		{
			if(i<=j+ar[j] && table[j] != INT_MAX)
			{
				table[i] = min(table[i],table[j]+1);
				debug(table,n);
				break;
			}
		}
	}
	
	cout<<table[n-1];
}

void solve()
{
	int n;
	cin>>n;
	
	int ar[n];
	for(int i=0;i<n;i++)cin>>ar[i];
	
	getMinimumSteps(ar,n);
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



