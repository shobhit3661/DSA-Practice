/*
	next permutation of a given array of number
	leetcode probem
*/

#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void get_next(vector<int>& ar)
{
	 if(ar.size()<=1)return;
	        int n = ar.size();
	        int i;
	        for(i=n-2;i>=0;i--)
            {
                if(ar[i]<ar[i+1])
                {
                    break;
                }
            }
	        int j;
            if(i<0)
            {
            sort(ar.begin(),ar.end());
            return;
        }
        
	    if(i>=0)
	    {
		    j = n-1;
		    while(ar[j]<=ar[i])j--;
	    }
	
	    swap(ar[i],ar[j]);
	
	    reverse(ar.begin()+i+1,ar.end());
}

void solve()
{
	int n;
	cin>>n;
	vector<int> ar;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		ar.push_back(temp);
	}
	get_next(ar);
	
	for(auto it:ar)
	{
		cout<<it<<" ";
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



