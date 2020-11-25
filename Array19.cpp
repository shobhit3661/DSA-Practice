#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void get_ans(int ar[],int n)
{
	int i = -1;
	for(int j=0;j<n;j++)
	{
		if(ar[j]<0)
		{
			i++;
			swap(ar[i],ar[j]);
		}
	}
	
	
	int pos = i+1,neg=0;
	while(pos<n && neg<pos && ar[neg]<0)
	{
		swap(ar[pos],ar[neg]);
		pos++;
		neg+=2;
	}
	
	for(int i=0;i<n;i++)cout<<ar[i]<<" ";
}

void solve()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)cin>>ar[i];
	
	get_ans(ar,n);
	
	
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



