/*
	1XY2 is a valid shuffle of XY and 12
	Y12X is not a valid shuffle of XY and 12

	
*/

#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{	
	string a;
	string b;
	string s;
	
	cin>>a;
	cin>>b;
	cin>>s;
	
	int len = s.length();
	int i=0,j=0,k=0;
	while(k<len)
	{
		if(s[k]==a[i] && i<a.length())
		{
			i++;
		}
		else
		{
			if(s[k]==b[j] && j<b.length())
			{
				j++;
			}
			
			else
			{
				cout<<"false";
				return;
			}
		}
		k++;
	}
	
	if(i<a.length() || j<b.length())
	{
		cout<<"false";
		return;
	}
	
	else
	{
		cout<<"true";
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



