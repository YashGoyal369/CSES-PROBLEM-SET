#include<bits/stdc++.h>
using namespace std;
#define int long long
void f(int n){
    if(n==1){
        cout<<endl;
        return;
    }
    if(n%2){
        int a=n*3+1;
        cout<<a<<" ";
        f(a);
    }
    else{
        int a=n/2;
        cout<<a<<" ";
        f(a);
    }
}
 
void solve(){
    int n;
    cin>>n;
    cout<<n<<" ";
    f(n);
}
 
int32_t main(){
    solve();
}
