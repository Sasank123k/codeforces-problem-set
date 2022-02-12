#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int odd=1;
    int sum1=0,sum2=0;
    if(n/2%2==0){
        cout<<"YES"<<endl;
        for(int i=2;i<=n;i+=2){
            cout<<i<<" ";
            sum1+=i;
        }
        for(int i=1;i<n/2;i++){
            cout<<odd<<" ";
            sum2+=odd;
            odd+=2;
        }
        cout<<sum1-sum2<<endl;
    }
    else{
        cout<<"NO"<<endl;
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