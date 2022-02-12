#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;
    if(a%b==0){
        cout<<0<<endl;
    }else{
        cout<<b-(a%b)<<endl;
    }
}
int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}