#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void solve(){
    long long int a,b;
    cin>>a>>b;
    long long int ans=max(a,b)-min(a,b);
    cout<<int(ceil(double(ans)/10))<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}