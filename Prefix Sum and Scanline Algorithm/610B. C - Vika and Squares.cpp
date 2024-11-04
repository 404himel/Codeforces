Q: CodeForces - 610B

code:
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{

	ll n;
	cin>>n;
	vector<ll> v(n);
	for(ll i=0;i<n;i++)
		cin>>v[i];
	ll m=*min_element(v.begin(),v.end());
	// cout<<m;
	ll id;

	for(ll i=n-1;i>=0;i--)
	{
		if(m==v[i])
		{
			id=i;
			break;
		}
	}
	ll iv=v[id];
	
	vector<ll>mi;
	for(ll i=0;i<n;i++)
	{
		if(iv==v[i])
		{
			mi.push_back(i);
		}

	}
	ll idx=id;
	
	
	ll x=++id;
	
	if(mi.size()==1)
		cout<<(m*n)+(n-x)+idx<<endl;
	else
	{
		ll size=mi.size();
		ll ans=mi[0]+(n-1-mi[size-1]);
		for(ll i=1;i<size;i++)
		ans=max(ans,mi[i]-mi[i-1]-1);
		cout<<n*iv+ans<<endl; 
	}
	

	
	
}
