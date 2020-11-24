/*
	next permutation of a given array of number
	leetcode probem
*/

#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void get_next(vector<int>& ar,int n)
{
	
}

void solve()
{
	int n;
	cin>>n;
	vector<int> ar(n);
	for(int i=0;i<ar.size();i++)
	{
		int temp;
		cin>>temp;
		ar.push_back(temp);
	}
	get_next(ar,n);
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



