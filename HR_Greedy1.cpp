#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j;
	string s;
	ll hash[101]={};
	cin>>n;
	ll x[n];
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}

	ll ans=1e5+100;
	sort(x,x+n);
	for(i=0;i<n-1;i++)
	{
		ans = min(ans,abs(x[i]-x[i+1]));
	}
	cout<<ans;
	return 0;
}