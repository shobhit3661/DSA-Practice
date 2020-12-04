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
	
	int len = s.length();
	
	int count1 = 0,count0 = 0,cnt =0;
	
	for(int i=0;i<len;i++)
	{
		if(s[i]=='1')
		{
			count1++;
		}
		else
		{
			count0++;
		}
		
		if(count1==count0)
		{
			cnt++;
		}
	}
	
	if(count1 != count0)
	{
		cout<<"-1";
	}
	
	else{
		cout<<cnt<<"\n";
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



