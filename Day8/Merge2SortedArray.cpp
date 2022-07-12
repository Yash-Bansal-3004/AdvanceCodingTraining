#include<iostream>

using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	int b[m];
	int c[n+m];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<m;j++)
	{
		cin>>b[j];
	}
	int k=0,l=0,f=0;
	while(k<n&&l<m)
	{
		if(a[k]<=b[l])
		{
			c[f]=a[k++];
		}
		else
		{
			c[f]=b[l++];
		}
		f++;
	}
	while(k<n)
	{
		c[f++]=a[k++];
	}
	while(l<m)
	{
		c[f++]=b[l++];
	}
	for(int i=0;i<m+n;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
