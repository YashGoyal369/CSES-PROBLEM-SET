#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
void solve(){
    string n;
    cin>>n;
    int c=1,mx=1;
    for(int i=0;i<n.size()-1;i++){
        if(n[i]==n[i+1])
        c++;
        else{
            mx=max(mx,c);
            c=1;
        }
        mx=max(mx,c);
    }
    cout<<mx<<endl;
 
}
 
int32_t main(){
    solve();
}
