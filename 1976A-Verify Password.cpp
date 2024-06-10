#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        vector<char>digit;
        vector<char>chr;
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i]))
            {
                digit.push_back(s[i]);
            }
            else
            {
                chr.push_back(s[i]);
            }
        }
        sort(digit.begin(),digit.end());
        sort(chr.begin(),chr.end());
        
        string ans="";
        
        for(int i=0;i<digit.size();i++)
        {
            ans+=digit[i];
        }
        
        for(int i=0;i<chr.size();i++)
        {
            ans+=chr[i];
        }
        
        if(ans==s)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
}
//himel11
