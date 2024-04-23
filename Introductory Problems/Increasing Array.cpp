#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    int c=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            c+=v[i]-v[i+1];
            v[i+1]+=v[i]-v[i+1];
        }
    }
    cout<<c<<endl;
    
}
 
int32_t main(){
    solve();
}
