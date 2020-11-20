#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void get_union(int a[],int b[],int n,int m)
{
	set<int> hs;
	
	for(int i=0;i<n;i++)
		hs.insert(a[i]);
	
	for(int i=0;i<m;i++)
		hs.insert(b[i]);
		
	for(auto it=hs.begin();it!=hs.end();it++)
	{
		cout<<*it<<" ";
	}
	
	cout<<endl;
}

void get_intersection(int a[],int b[],int n,int m)
{
	set<int> hs;
	
	for(int i=0;i<n;i++)
	{
		hs.insert(a[i]);
	}
	
	for(int i=0;i<m;i++)
	{
		if(hs.find(b[i])!=hs.end())
			cout<<b[i]<<" ";
	}
	cout<<endl;
}

void solve()
{
	int n;
	int m;
	cin>>n>>m;
	
	int a[n];
	int b[m];
	
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<m;i++)cin>>b[i];
	
	get_union(a,b,n,m);
	get_intersection(a,b,n,m);
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



