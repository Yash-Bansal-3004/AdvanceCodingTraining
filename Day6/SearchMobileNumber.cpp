#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<string> vec;
	vector<string> v;
	int num,count=0;
	cout<<"Enter the size that how many mobile numbers you want to store: "<<endl;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		string st;
		cin>>st;
		vec.push_back(st);
	}
//	for (vector<string>::iterator it=vec.begin(); it!=vec.end(); ++it) {
//        cout<<*it<<endl;
//    }
	string s="9920";
	for(int i=0;i<num;i++)
	{
		string str=vec[i].substr(0,4);
		if(s==str)
		{
			count++;
			v.push_back(vec[i]);
		}
	}
	cout<<"Total Number Found: "<<count<<endl;
	cout<<"Which are as follows: "<<endl;
	for (vector<string>::iterator it=v.begin(); it!=v.end(); ++it)
        cout<<*it<<endl;
	return 0;
}
