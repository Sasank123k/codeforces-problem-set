#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        arr[a-1]=i;
    }
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}