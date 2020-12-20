#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
	int n;
	cin>>n;
	
	int ar[n];
	arin(ar,n);
	int sum;
	cin>>sum;
	
	for (int i = 0; i < n - 2; i++)  
    { 
        unordered_set<int> s; 
        int curr_sum = sum - ar[i]; 
        for (int j = i + 1; j < n; j++)  
        { 
            if (s.find(curr_sum - ar[j]) != s.end())  
            { 
                printf("Triplet is %d, %d, %d", A[i], 
                       A[j], curr_sum - A[j]); 
                return true; 
            } 
            s.insert(A[j]); 
        } 
    } 
    return false; 
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



