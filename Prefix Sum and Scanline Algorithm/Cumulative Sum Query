Q: https://vjudge.net/problem/SPOJ-CSUMQ


Code:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    int pre[n];
    pre[0]=v[0];
    for(int i=1; i<n; i++)
    {
        pre[i]=pre[i-1]+v[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(l==0)
            cout<<pre[r]<<endl;
        else
            cout<<pre[r]-pre[l-1]<<endl;
    }
}
//Himel<>
