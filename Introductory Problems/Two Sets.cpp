#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
void solve(){
    int n;
    cin>>n;
    int a=n*(n+1)/2;
    if(a%2){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        vector<int>a,b;
        if(n%2){
            a.push_back(1);
            for(int i=2;i<(n+1)/2;i+=2){
                a.push_back(i);
                a.push_back(n-i+2);
            }
            for(int i=3;i<(n+1)/2;i+=2){
                b.push_back(i);
                b.push_back(n-i+2);
            }
            a.push_back(n/2+1);
            b.push_back(n/2+2);
        }
        else{
            for(int i=1;i<n/2;i+=2){
                a.push_back(i);
                a.push_back(n-i+1);
            }
            for(int i=2;i<n/2;i+=2){
                b.push_back(i);
                b.push_back(n-i+1);
            }
            b.push_back(n/2);
            b.push_back(n/2+1);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        cout<<a.size()<<endl;
        for(auto it:a)
        cout<<it<<" ";
        cout<<endl;
 
        cout<<b.size()<<endl;
        for(auto it:b)
        cout<<it<<" ";
        cout<<endl;
    }
}
 
int32_t main(){
    // int t;
    // cin>>t;
    // while(t--)
    solve();
}
