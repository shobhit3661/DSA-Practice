import java.util.*;
class GFG {

	public static void solve()
	{
		Scanner sc = new Scanner(System.in);
		int n,x;
		n = sc.nextInt();
		x = sc.nextInt();
		int ar[] = new int[n];
		for(int i=0;i<n;i++)
		{
			ar[i] = sc.nextInt();
		}
		int start = 0;
		int end = 0;
		int curr_sum =0;
		int ans = n+1;
		while(end<n)
		{
			while(curr_sum <= x && end < n)
				curr_sum += ar[end++];

			while(curr_sum > x && start < n)
			{
				if(end-start < ans)
					ans = end - start;

				curr_sum -= ar[start++];
			}
		}
		
		System.out.println(ans);
	}

	public static void main (String[] args) 
	{
		Scanner sc = new Scanner(System.in);

		int t;
		t = sc.nextInt();
		while(t>0)
		{
			solve();
			t--;
		}
	}
}