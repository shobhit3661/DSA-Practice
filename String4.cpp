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
	string b;
	
	cin>>s;
	cin>>b;
	
	int n = s.length();
	int m = b.length();
	
	if(n!=m)
	{
		cout<<false;
		return;
	}
	string temp = s+s;
	
	if(temp.find(b) != string::npos)
	{
		cout<<true;
	}
	else
	{
		cout<<false;
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



