#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void selectionsort(int a[],int b){
    int min=0;
    int temp;
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
    int n,k;
    cin>>n>>k;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    
    selectionsort(arr1,n);
    selectionsort(arr2,n);
    int ans=0;
    int temp=0;
    int last=n-1;
    while(k--){
        if(arr1[temp]<arr2[last]){
            arr1[temp]=arr2[last];
        }
        temp++;
        last--;
    }
    for(int x:arr1){
        ans+=x;
    }
    cout<<ans<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}