Q: CodeForces - 1237B

code:


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	map<int,int>mp;
	vector<int>x(n);

	for(int i=0;i<n;i++)
		cin>>x[i];

	vector<int>y(n);

	for(int i=0;i<n;i++)
		cin>>y[i];

	int d=0;

	for(int i=n-1;i>=0;i--)
	{
		while(mp[y[y.size()-1]]!=0 && y.size()>0)
		{
			y.pop_back();
		}
		if(y[y.size()-1]!=x[i])
			d++;
		mp[x[i]]=1;


	}
	cout<<d<<endl;

	
}
// 5
// 3 5 2 1 4
// 4 3 2 5 1
