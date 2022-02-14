#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=arr[0];
    int b=arr[1];
    int c=arr[2];
    if(a!=b&&a!=c){
        cout<<1<<endl;
        return;
    }
    else{
        int temp=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]!=temp){
                cout<<i+1<<endl;
                return;
            }
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