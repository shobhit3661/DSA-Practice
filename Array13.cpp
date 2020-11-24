#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

static bool comp(const vector<int> &v1,const vector<int> &v2)
{
	return (v1[0]<v2[0]);
}

void solve()
{
	vector<vector<int>> ar;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		vector<int> temp;
		int x,y;
		cin>>x>>y;
		temp.push_back(x);
		temp.push_back(y);
		ar.push_back(temp);
	}
	
	sort(ar.begin(),ar.end(),comp);
	vector<vector<int>> ans;
	vector<int> temp = ar[0];
	for(int i=1;i<n;i++)
	{
		if(temp[1] >= ar[i][0])
		{
			temp[1] = max(temp[1],ar[i][1]);
		}
		else
		{
			ans.push_back(temp);
			temp = ar[i];
		}
	}
	ans.push_back(temp);
	
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i][0]<<" "<<ans[i][1]<<" ";
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



