/*
	https://www.geeksforgeeks.org/find-element-appears-array-every-element-appears-twice/
*/

#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void solve()
{
	int n;
	cin>>n;
	
	int ar[n];
	for(int i=0;i<n;i++)cin>>ar[i];
	
	//Hashmap solution is posible
	
	int temp=0;
	for(int i=0;i<n;i++)
	{
		temp ^= ar[i];
	}
	cout<<temp;
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



