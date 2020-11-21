/*
	kadane's  algo 
	https://www.geeksforgeeks.org/maximum-contiguous-circular-sum/
*/

#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void get_ans(int a[],int n)
{
	//get intial sum
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum += a[i];
	}
	
	//now apply simple kadane
	//to find minimum consecutive subarray sum
	
	int min_so_far = a[0];
	int temp_min = a[0];
	
	int max_so_far = a[0];
	int temp_max = a[0];
	
	for(int i=0;i<n;i++)
	{
		//for max subAraay sum;
		temp_max = max(temp_max+a[i],a[i]);
		max_so_far = max(temp_max,max_so_far);
		
		//for min subarray sum;
		temp_min = min(temp_min+a[i],a[i]);
		min_so_far = min(temp_min,min_so_far);
		
	}
	if(min_so_far = sum)
	{
		cout<<max_so_far<<"\n";
	}
	
	cout<<max(max_so_far,sum-min_so_far);
	
}

void solve()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	get_ans(a,n);
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



