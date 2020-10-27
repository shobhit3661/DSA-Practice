#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void reverseList(int a[],int n)
{
	int last = n-1;
	for(int i=0;i<n/2;i++)
	{
		int temp = a[last];
		a[last] = a[i];
		a[i] = temp;
		
		last--;
	}
}

void solve()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	
	reverseList(a,n);
	
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
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



