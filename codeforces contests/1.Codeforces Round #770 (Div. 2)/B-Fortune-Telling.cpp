#include<iostream>
#include<string>
using namespace std;
void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    long long int arr[n];
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
        if(arr[i]>10000){
            if(arr[i]%2==0){
                arr[i]=2;
            }
            else{
                arr[i]=1;
            }
        }
    }
    int destination;
    if(y%2==0){
        destination=0;
    }
    else{
        destination=1;
    }
    int start;
    if(x%2==0){
        start=2;
    }
    else{
        start=1;
    }
    for(auto x:arr){
        if(x%2==0){
            start+=0;
        }
        else{
            start+=1;
        }
    }
    if(start%2==destination){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
    }
    return ;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}