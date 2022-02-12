#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void selectionsort(int a[],int b){
    int min,temp;
    for(int j=0;j<b-1;j++){
        min=j;
        for(int k=j+1;k<b;k++)
            if(a[k]<a[min])
                min=k;
            
            temp=a[j];
            a[j]=a[min];
            a[min]=temp;
            
        
    }
}

int solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]<=1){
            continue;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}