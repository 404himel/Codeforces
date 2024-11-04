Q: CodeForces - 433B

code:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++)
        cin>>v[i];
    long long pre[n+1];
    pre[1]=v[1];
    for(int i=2; i<=n; i++)
    {
        pre[i]=pre[i-1]+v[i];
    }

    sort(v.begin(),v.end());
    long long  pres[n+1];
    pres[1]=v[1];
    for(int i=2; i<=n; i++)
    {
        pres[i]=pres[i-1]+v[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int d,l,r;
        cin>>d>>l>>r;
        if(d==1)
        {
            if(l==1)
                cout<<pre[r]<<endl;
            else
                cout<<pre[r]-pre[l-1]<<endl;

        }
        else if(d==2)
        {
            if(l==1)
                cout<<pres[r]<<endl;
            else
                cout<<pres[r]-pres[l-1]<<endl;

        }




    }
}
