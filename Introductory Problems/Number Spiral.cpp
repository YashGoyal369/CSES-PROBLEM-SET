#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
void solve(){
    int x,y;
    cin>>x>>y;
    int ans=max(x,y)*max(x,y)-min(x,y)+1;
    if(x==1 && y==1){
        cout<<1<<endl;
        return;
    }
    if(x==y){
            cout<<x*x-x+1<<endl;
            return;
    }
    if((y>x &&  y%2)|| (x>y && x%2==0)){
        cout<<ans<<endl;
    }
    else{
        cout<<ans-2*abs(x-y)<<endl;
    }
    
}
 
int32_t main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}
