//Van Eck Sequence
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout<<"Enter the size of the sequence: ";
	cin>>n;
	int num=0;
	int pos=0;
	vector<int> vec;
	map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		if(mp.find(num)!=mp.end())
		{
			pos=i-mp[num];
		}
		else
		{
			pos=0;
		}
		mp[num]=i;
		vec.push_back(num);
		num=pos;
	}
	
	for (vector<int>::iterator it=vec.begin(); it!=vec.end(); ++it)
        cout<<*it<<" ";
	return 0;
}
