#include <bits/stdc++.h>
using namespace std;
#define ki long long



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        ki n;
        cin >> n;
        vector<ki> v(n);
        vector<ki> vv(n + 1);
        for (ki i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (ki i = 0; i < n + 1; i++) {
            cin >> vv[i];
        }


        ki ans=1;
        for(ki i=0; i<n; i++)
        {
            ans+=abs(v[i]-vv[i]);
        }

        ki mn=INT_MAX;
        ki x=vv[n];
        for(ki i=0; i<n; i++)
        {
            mn=min(mn,min(abs(x-v[i]),abs(x-vv[i])));
            if(x<=max(v[i],vv[i]) && x>=min(v[i],vv[i]))
                mn=0;
        }
        ans+=mn;
        cout<<ans<<endl;
    }
    return 0;
}
//himel11
