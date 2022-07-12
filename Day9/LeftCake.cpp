#include<bits/stdc++.h>

using namespace std;
int sum=0;

int binarySearch(int l, int r, int x)
{
    if (r > l)
	 {    
		int mid = l + (r - l) / 2;
        sum=mid*(mid+1)/2;   
        if (sum > x)
            return binarySearch(l, mid - 1, x);
        else if(sum < x)
        	return binarySearch(mid + 1, r, x);
        else
        	return 0;
    }
    else
    {
    	if(r<l)
    	{
    		sum=r*(r+1)/2;
    		x=x-sum;
    		return x;
    	}
    	else if(r>l)
    	{
    		x=x-sum;
    		return x;
		}
		else
		{
			sum=r*(r+1)/2;
    		x=x-sum;
    		return x;
		}
	}
}
int main()
{
	int cake;
	cout<<"Enter No. Of Cakes: ";
	cin>>cake;
	int n;
	cout<<"Enter No. of Peoples: ";
	cin>>n;
	int ans=n*(n+1)/2;
	//int rounds=cake/n;
	int rem=cake%ans;
	//cout<<rem<<endl;
	cout<<"Left Cake: "<<binarySearch(1,n,rem)<<endl;
	return 0;
}
