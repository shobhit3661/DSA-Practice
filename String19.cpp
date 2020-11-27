/*
	given string s and pattern p find all the starting point of pattern p in string s
	
	input:
		abcddabc
		abc
		
	output:
		0,5

*/

#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void lps(int lp[],string s)
{
	int size = s.length();
	lp[0] = 0;
	int i = 1;
 	int len = 0;
	while(i<size)
	{
 		if(s[i]==s[len])
		{
		 	len++;
		 	lp[i] = len;
		 	i++;
		}
		else
		{
			if(len!=0)
			{
				len = lp[len-1];
			}
			else
			{
				lp[i] =0;
				i++;
				
			}
		}
	}
	
}

void solve()
{
	string s;
	string p;
	
	cin>>s;
	cin>>p;
	
	vector<int> index;
	int size1 = s.length();
	int size2 = p.length();
	int lp[size2];
	lps(lp,p);
	//debug(lp,size2);
	
	int i=0;
	int j=0;
	while(i<size1)
	{
		if(s[i]==p[j])
		{
			i++;
			j++;
		}
		
		if(j==size2)
		{
			index.pb(i-j);
			j = lp[j-1];
		}
		else
		{
			if(i<size1 && p[j] != s[i])
			{
				if(j!=0)
				{
					j = lp[j-1];
				}
				else
				{
					i = i+1;
				}
			}
		}	
	}
	
	for(auto it : index)
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



