#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void selectionsort(int a[],int b){
    int min=0,temp;
    for(int i=0;i<b-1;i++){
        min=i;
        for(int j=i+1;j<b;j++)
            if(a[j]<a[min])
                min=j;
            
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        
    }
}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    int min=INT32_MAX;
    int temp=1;
    for(int i=0;i<n-1;i++){
        int a=arr[temp]-arr[i];
        
        if(a<min){
            min=a;
        }
        temp++;
    }
    cout<<min<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}