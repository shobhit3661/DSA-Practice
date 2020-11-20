#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void get_ans(int ar[],int n)
{
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(ar[i]<0)
		{
			//if(i!=j)
			{
				swap(ar[i],ar[j]);
				j++;
			}
		}
	}
	
}

void solve()
{
	int n;
	cin>>n;
	
	int ar[n];
	for(int i=0;i<n;i++)cin>>ar[i];
	
	get_ans(ar,n);	
	for(int i=0;i<n;i++)cout<<ar[i]<<" ";
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



