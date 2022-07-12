//Hiphens in starting
#include<iostream>

using namespace std;
int main()
{
	string str;
	cin>>str;
	string s[str.size()];
	int c=0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='-')
		{
			c++;
		}
	}
	int k=0;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='-')
		{
			s[k++]=str[i];
		}
		else
		{
			s[c++]=str[i];
		}
	}
	for(int i=0;i<str.size();i++)
	{
		cout<<s[i];
	}
	return 0;
}
