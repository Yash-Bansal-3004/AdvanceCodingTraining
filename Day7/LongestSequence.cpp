//Longest Sequence
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int maxy=INT_MIN;
	cout<<"Enter the size of array: ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	map<int,int> m;
	m.insert(make_pair(a[0], 1));
	for(int i=1;i<n;i++)
	{
		if(m.find(a[i]-1) != m.end())
		{
			m[a[i]]=m[a[i]-1]+1;
		}
		else
		{
			m[a[i]]=1;
		}
	}
	for(auto i : m)
	{
		if(maxy<i.second)
		{
			maxy=i.second;
		}
	}
	cout<<maxy<<endl;
	return 0;
}

