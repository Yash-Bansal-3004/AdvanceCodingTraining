#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp[n];
    stack <int> st;
    st.push(arr[n-1]);
    temp[n-1]=-1;
    
    for(int i=n-2;i>=0;i--){// 1 3 2 4
        while(!st.empty() && (arr[i]>st.top())){
            st.pop();
        }
        if(st.empty()){
            temp[i]=-1;
        }
        else{
            temp[i]=st.top();
        }
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<endl;
    }

    return 0;
}
