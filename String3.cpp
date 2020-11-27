#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
	int ar[26];
	memset(ar,0,sizeof(ar));
	
	string s;
	cin>>s;
	int size = s.length();
	for(int i=0;i<size;i++)
	{
		int temp = (int)s[i]-'a';
		ar[temp]++;
	}
	
	debug(ar,26);
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



