#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define debugi(x) cout<<x<<" ";
#define pb push_back
typedef long long int ll;

using namespace std;

int multiply(int x, int res[], int res_size) 
{ 
    int carry = 0;
    for (int i=0; i<res_size; i++) 
    { 
        int prod = res[i] * x + carry; 
        res[i] = prod % 10;   
        carry  = prod/10;     
    }  
    while (carry) 
    { 
        res[res_size] = carry%10; 
        carry = carry/10; 
        res_size++; 
    } 
    return res_size; 
} 
void solve()
{
	ll n = 50;
	cin>>n;
	int res[500]; 
    res[0] = 1; 
    int res_size = 1; 
    for (int x=2; x<=n; x++) 
        res_size = multiply(x, res, res_size); 
  
    for (int i=res_size-1; i>=0; i--) 
        cout << res[i]; 	
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



