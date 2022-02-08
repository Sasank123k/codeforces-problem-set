#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void solve(){
    long long int x0,n;
    cin>>x0>>n;
    long long int adder,mult;
    if(n%4==0){
        cout<<x0<<endl;
        return;
    }
    else if(n%2==0){
        if(x0%2==0){
        cout<<x0+1<<endl;
        }
        else{
            cout<<x0-1<<endl;
        }
        return;
    }
    adder=n%4;

    mult=n/4;
    if(adder==1){
        if(x0%2==0){
        cout<<x0-(4*mult+1)<<endl;
        }
        else{
            cout<<x0+(4*mult+1)<<endl;
        }
    }
    else{
        if(x0%2==0){
        cout<<x0+(4*(mult+1))<<endl;
        }
        else{
            cout<<x0-(4*(mult+1))<<endl;
        }
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}