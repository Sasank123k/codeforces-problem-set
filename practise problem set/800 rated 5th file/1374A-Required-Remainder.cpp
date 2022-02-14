#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void solve(){
    int x,y,k;
    cin>>x>>y>>k;
    int temp=k/x;
    while(temp*x+y>k){
        temp--;
    }
    cout<<temp*x+y<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}