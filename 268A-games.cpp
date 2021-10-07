#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	vector<pair<int,int>> p;
	int n,a,b;
	cin>>n;
	for(int i=0;i<n;i++)
{
	cin>>a>>b;
	p.push_back(make_pair(a,b));
}
int count=0;
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if(j==i)
		{
			continue;
		}
		if(p[i].first==p[j].second)
		{
			count++;
		}
	}
}
cout<<count;
	return 0;
}


