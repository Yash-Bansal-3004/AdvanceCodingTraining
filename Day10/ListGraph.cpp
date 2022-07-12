#include<bits/stdc++.h>

using namespace std;

void adjacentList(int n,int e)
{
	vector<int>adj[n];
	cout<<"x y: "<<endl;
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	cout<<"List of graph: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<i<<": ";
		for(vector<int>::iterator it=adj[i].begin();it!=adj[i].end();++it)
		{
			cout<<*it<<" ";
		}
		cout<<endl;
	}
}

void adjacentMatrix(int n,int e)
{
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
}
int main()
{
	int n,e;
	cout<<"Enter No. of Nodes: ";
	cin>>n;
	cout<<endl;
	cout<<"Enter No. of Edges: ";
	cin>>e;
	cout<<endl;
	
	int c;
	cout<<"Enter the choice: ";
	cin>>c;
	
	switch(c)
	{
		case 1:adjacentMatrix(n,e);
				break;
		case 2:adjacentList(n,e);
				break;
		default:cout<<"Invalid Number.";
	}
	
	return 0;
}
