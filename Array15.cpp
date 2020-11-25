#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

long long int merge(long long arr[],long long l,long long mid,long long h)
{
	ll a[h-l+1];
  ll i=l,j=mid+1,k=0,res=0;
  while(i<=mid && j<=h){
    if(arr[i]<=arr[j]){
      a[k++]=arr[i++];
    }
    else{
    a[k++]=arr[j++];
    res+=(mid+1-i);
    }
  }
  while(i<mid+1){
    a[k++]=arr[i++];
  }
  while(j<h+1)
  a[k++]=arr[j++];
  for(i=l;i<=h;i++){
    arr[i]=a[i-l];
  }
  return res;
}

long long int merge_sort(long long ar[],long long i,long long j)
{
	long long int temp=0;
	if(i<j)
	{
		int mid = i+(j-i) / 2;
		
		temp += merge_sort(ar,i,mid);
		temp += merge_sort(ar,mid+1,j);
		
		temp += merge(ar,i,mid,j);
	}
	
	return temp;
}

void solve()
{
	long long n;
	cin>>n;
	
	long long ar[n];
	for(int i=0;i<n;i++)cin>>ar[n];
	
	long long int count = merge_sort(ar,0,n-1);
	cout<<count;
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



