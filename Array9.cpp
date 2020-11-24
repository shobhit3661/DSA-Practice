#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;


int get_ans(int ar[],int n,int k)
{
	sort(ar,ar+n);
	int max = ar[n-1]-k;
	int min = ar[0]+k;
	
	if(min>max){
		swap(min,max);
	}
	
	int ans = ar[n-1]-ar[0];
	
	for(int i=1;i<n-1;i++)
	{
		int tempmin = ar[i]-k;
		int tempmax = ar[i]+k;
		
		if(tempmin>=min || tempmax<=max)
		{
			ar[i]+=k;
			continue;
		}
		
		if(max-tempmin <= tempmax-min)
		{
			min = tempmin;
		}
		else
		{
			max = tempmax;
		}
	}
	cout<<max<<" "<<min<<" "<<ans;
	cout<<std::min(ans,max-min);
}

void solve()
{
	int n;
	int k;
	cin>>n>>k;
	
	int ar[n];
	for(int i=0;i<n;i++)cin>>ar[i];
	
	get_ans(ar,n,k);
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



