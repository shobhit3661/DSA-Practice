#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

vector<int> get_ans(int a[],int b[],int c[],int n,int m,int k)
{
	vector<int> ans;
	int i=0,j=0,l=0;
	int temp=0;
	while(i<n && j<m && l<k)
	{
		if(a[i]==b[j] && b[j]==c[l])
		{
		    if(temp != a[i])
		    {
		        temp = a[i];
		        ans.push_back(a[i]);
		        i++;
		        j++;
		        k++;
		    }
		    else
		    {
		    	i++;
		    	j++;
		    	k++;
			}
		}
		
		else
		{
		   if(a[i]<b[j])
		    {
			    i++;
		    }
		
	        else
	        {
	             if(b[j]<c[l])
		        {
			        j++;
	        	}
		
		        else
		        {
		        	l++;
		        }
	          }
		    }
	    
	    }
	
	    return ans;
}

void solve()
{
	int n,m,k;
	cin>>n>>m>>k;
	
	int a[n];
	int b[n];
	int c[n];
	
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<m;i++)cin>>b[i];
	for(int i=0;i<k;i++)cin>>c[i];
	
	vector<int> ans = get_ans(a,b,c,n,m,k);
	for(auto it:ans)
	{
		cout<<it<<" ";
	}
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



