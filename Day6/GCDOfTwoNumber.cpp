#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
	if(a%b==0)
	{
		return b;
	}
	else
	{
		gcd(b,a%b);
	}
}
int main()
{
	int a,b;
	cout<<"Enter First Number: ";
	cin>>a;
	cout<<"Enter Second Number: ";
	cin>>b;
	int c=gcd(a,b);
	cout<<"GCD of "<<a<<" & "<<b<<" is: "<<c<<endl;
	return 0;
}
