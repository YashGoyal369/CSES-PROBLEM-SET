#include <bits/stdc++.h>
using namespace std;
 
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define endl '\n'
#define popcount __builtin_popcount //used to count the number of set bits in an unsigned integer
#define poplenl   __builtin_clzl
#define poplen   __builtin_clz  //Counts the leading number of zeros of the integer(long/long long). If x is of long type,we can use __builtin_clzl(x) If x is of long long type
#define all(x) x.begin(),x.end()
#define rep(i,x,y) for (int i=x;i<y;i++)
#define pb push_back
#define py cout<<"YES\n";
#define pm cout<<"-1\n";
#define pn cout<<"NO\n";
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
 
typedef long long ll;
ll MOD=1e9+7;
ll binpow(ll b, ll e){
	ll ans = 1;
	while (e !=0){
		if (e&1) ans=(ans%MOD*b%MOD);
		e=e>>1;
		b  = (b*b)%MOD;
	}
	return ans;
}
  
void solve(){
	int n;
	cin>>n;
	ll a=binpow(2,n);
	cout<<a<<endl;
}
 
int main(){
	// int t;
	// cin>>t;
	// while(t--){
		solve();
	// }
	
}
