#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
void solve(){
    int n;
    cin>>n;
    vector<int>v(n-1);
    for(int i=0;i<n-1;i++)
    cin>>v[i];
    sort(v.begin(),v.end());
    int k=1;
    for(int i=0;i<n-1;i++){
        if(k!=v[i]){
            cout<<k<<endl;
            return;
        }k++;
    }
    cout<<n<<endl;
}
 
int32_t main(){
    solve();
}
