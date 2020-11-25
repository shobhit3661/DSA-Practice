#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void solve()
{
	int n;
	cin>>n;
	
	vector<int> ar;
	
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		ar.push_back(temp);
	}
	
	int l=0,r=1,maxe=0;
	
	while(r<ar.size())
	{
		if(ar[l]>=ar[r]) l = r++;
		else
		{
			maxe = max(maxe,ar[r++]-ar[l]);
		}
	}
	
	cout<<maxe;
	
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



