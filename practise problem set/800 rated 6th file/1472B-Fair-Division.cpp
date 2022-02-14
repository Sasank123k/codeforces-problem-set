#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    int a1=0,a2=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            a1++;
        }
        else{
            a2++;
        }
    }
    if(a1%2==0){
        a1=a1;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
    if(a2%2==0){
        cout<<"YES"<<endl;
    }
    else{
        if(a1>=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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