#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void solve()
{
	int n;
        int loc;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)cin>>ar[i];
        cin>>loc;
        sort(ar,ar+n);
        cout<<ar[loc-1]<<"\n";
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



