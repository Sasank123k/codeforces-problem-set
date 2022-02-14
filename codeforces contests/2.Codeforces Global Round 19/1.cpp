#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    int temp=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[temp]){
            temp++;
            continue;
        }
        else{
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}