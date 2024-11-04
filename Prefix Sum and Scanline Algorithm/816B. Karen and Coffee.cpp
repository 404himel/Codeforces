Q : CodeForces - 816B

Code:

#include<bits/stdc++.h>
using namespace std;
int arr[200005];
int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        arr[a]++;
        arr[b+1]--;

    }
    for(int i=1; i<=200000; i++)
        arr[i]+=arr[i-1];

    for(int i=1; i<=200000; i++)
    {
        if(arr[i]>=k)
            arr[i]=1;
        else
            arr[i]=0;
    }
    for(int i=1; i<=200000; i++)
    {
        if(arr[i]==1)
            arr[i]=arr[i-1]+1;
        else
            arr[i]=arr[i-1];
    }
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        cout<<arr[b]-arr[a-1]<<endl;
    }



}
/*
3 2 4
91 94
92 97
97 99
92 94
93 97
95 96
90 100*/
