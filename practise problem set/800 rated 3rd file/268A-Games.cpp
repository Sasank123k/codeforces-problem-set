#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        cin>>arr2[i];
    }
    for(int x:arr1){
        for(int y:arr2){
            if(x==y){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}