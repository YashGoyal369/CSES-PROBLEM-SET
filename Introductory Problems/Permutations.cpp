#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    int c=0;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n<4){
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    if(n==4){
        cout<<"2 4 1 3"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=n;i>0;i-=2){
        cout<<i<<" ";
    }
    for(int i=n-1;i>0;i-=2){
        cout<<i<<" ";
    }
    cout<<endl;
}
 
int32_t main(){
    solve();
}
