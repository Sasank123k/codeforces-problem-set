#include<iostream>
using namespace std;
void solve(){
    int a ,b;
    cin >> a >> b;
    int ans;
    if(a==1 && b==1){
        cout<<0<<endl;
    }
    else if((a==1 && b!=1) || (a!=1 && b==1)){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
    return ;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}