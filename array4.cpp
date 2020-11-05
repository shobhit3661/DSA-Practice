#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void solve()
{
	int n;
	cin>>n;
	
	int ar[i];
	
	for(int i=0;i<n;i++)cin>>ar[i];
	
	int zero=0,one=0,two=0;
	
	for(int i=0;i<n;i++)
	{
		if(ar[i]==0)
		{
			zero++;
		}
		if(ar[i]==1)
		{
			one++;
		}
		if(ar[i]==2)
		{
			two++;
		}
	}
	
	for(int i=0;i<zero;i++)cout<<"0"<<" ";
	for(int i=0;i<one;i++)cout<<"1"<<" ";
	for(int i=0;i<two;i++)cout<<"2"<<" ";
	cout<<"\n";

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



