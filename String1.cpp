#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
	vector<char> s;
	int size;
	cin>>size;
	
	for(int i=0;i<size;i++)
	{
		char temp;
		cin>>temp;
		s.pb(temp);
	}
	
	int i=0,j=size-1;
	while(i<=j)
	{
		swap(s[i],s[j]);
		i++;
		j--;
	}
	
	debug(s,size);
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



