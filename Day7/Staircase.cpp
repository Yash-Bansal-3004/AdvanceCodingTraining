#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int dp[n+1];
	dp[n]=1;
	dp[n-1]=1;
	for(int i=n-2;i>=0;i--)
	{
		dp[i]=dp[i+1]+dp[i+2];
	}
	cout<<dp[0]<<endl;
	return 0;
}
