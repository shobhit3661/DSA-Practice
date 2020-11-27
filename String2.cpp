#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
	string s;
	cin>>s;
	
	int n = s.length();
	int ans = 1;
	int i=0;
	int j=n-1;
	while(i<=j)
	{
		if(s[i]!=s[j])
		{
			ans=0;
		}
		i++;
		j--;
	}
	if(ans==1)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
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



