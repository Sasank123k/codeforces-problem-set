#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void solve(){
    int k;
    cin>>k;
    int ans=1;
    int cnt=1;
    int arr[k];
    while(k>0){
        if(cnt%3!=0&&cnt%10!=3){
            cnt++;
            ans++;
            k--;
        }
        else{
            cnt++;
            ans++;
        }
    }
    cout<<ans-1<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}