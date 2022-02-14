#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int max=INT8_MIN;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int ans=0;
    for(int x:arr){
        if(x<max){
            ans+=(max-x);
        }
    }
    cout<<ans;
    return 0;
}