#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
	int n;
	cin>>n;
	
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
	for(int i=0;i<n;i++)
    {
        int temp = ar[i];
        string s = to_string(temp);
        reverse(s.begin(),s.end());
        int rev = stoi(s);
        if(temp!=rev)
        {
        	cout<<0<<"\n";
		}
    }
    
    cout<<1<<"\n";
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



