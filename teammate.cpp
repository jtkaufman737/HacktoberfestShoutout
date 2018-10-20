#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long int ll;
typedef long double ld;
#define pii pair<int,int>
#define pll pair<ll,ll>
const ll M=1e9+7;
ll arr[100100],cnt[100100];

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,n,val,diff,ans;
    cin >> t;
    while(t--)
    {
    	cin >> n;
    	ans=1;
    	for(ll i=0;i<n;i++)
    	{
    		cin >> arr[i];
    		//cnt[arr[i]]++;
    	}
    	sort(arr,arr+n);
    	for(ll i=n-1;i>=0;i-=2)
    	{
    		val = arr[i-1];
    		diff = upper_bound(arr,arr+i,val) - lower_bound(arr,arr+i,val);
    		ans = ((ans%M)*(diff%M))%M;
    	}
    	for(ll i=0;i<n;i++) arr[i]=0;
    	cout << ans << endl;
    }
	return 0;
}