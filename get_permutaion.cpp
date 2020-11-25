/*
	given lexicographical number of  n digit number find the lexicographically premutaion
	
*/

#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void solve()
{
	int n;
	int k;
	cin>>n>>k;
	
	int fact[11];
	fact[0]=1;
	for(int i=1;i<11;i++)
	{
		fact[i] = fact[i-1] * i;
	}
	
	vector<int> digits;
	for(int i=1;i<=n;i++)
	{
		digits.push_back(i);
	}
	
	string ans;
	
	while(n>=1)
	{
		if(n==1)
		{
			ans+=to_string(digits.back());
			break;
		}
		int temp = k/fact[n-1];
		if(k%fact[n-1]==0)
		{
			temp-=1;
		}
		
		ans+=to_string(digits[temp]);
		digits.erase(digits.begin()+temp);
		
		k-= fact[n-1]*temp;
		n--;		
	}
	
	cout<<ans;
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



