#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int selectionsort(int a[],int b){
    int min=0;
    int temp;
    int check=0;
    for(int i=0;i<b-1;i++){
        min=i;
        for(int j=i+1;j<b;j++)
            if(a[j]<a[min])
                min=j;
            
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        
    }
    int mex=0;
    for(int x=0;x<b;x++){
        if(a[x]==check){
            check++;
            mex++;
            continue;
        }
        else{
            return mex;
        }
    }
    return mex;
}
void solve(){
    int n;
    cin>>n;
    int ans=pow(2,n);
    int temp=1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-temp;i++){

    }
    cout<<selectionsort(arr,n);
}
int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}