#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;
    cout<<pow(min(max(2*a,b),max(2*b,a)),2)<<endl;

}
int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}