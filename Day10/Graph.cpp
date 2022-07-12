#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,e;
	cin>>n>>e;
	
	int arr[n+1][n+1]={0};
	
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		arr[a][b]=1;
		arr[b][a]=1;
	}
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<n+1;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
