#include<iostream>

using namespace std;

int main()
{
	int a[]={5,7,8};
	int b[]={1,2,3};
	
	for(int i=11;i<INT_MAX;i+=8)
	{
		if(i%5==1&&i%7==2)
		{
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
