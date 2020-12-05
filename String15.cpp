#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void print(vector<int> ar)
{
	int len = ar.size();
	for(int i=0;i<len;i++)
	{
		cout<<ar[i]<<" ";
	}
}

void solve()
{
	int n;
	cin>>n;
	
	vector<int> ar;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		ar.pb(temp);
	}
	int index = -1;
	for(int i=n-2;i<=0;i--)
	{
		if(ar[i] > ar[i-1])
		{
			index  = i;
			break;
		}
	}
	
	if(index = -1)
	{
		printa(ar);
	}
	int r = n-1;
	int l = index;
	reverse(ar+l,ar+r+l);
	
	
	
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



