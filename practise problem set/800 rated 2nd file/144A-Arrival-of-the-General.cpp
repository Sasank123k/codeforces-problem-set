#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int min=INT8_MAX;
    int minindex,maxindex;
    int max=INT8_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=min){
            min=arr[i];
            minindex=i;
        }
        if(arr[i]>max){
            max=arr[i];
            maxindex=i;
        }
    }   
    if(arr[0]==arr[maxindex]&&arr[n-1]==arr[minindex]){
        cout<<0;
        return 0;
    }
    if(minindex>maxindex){
        cout<<(n-(minindex+1))+maxindex;
    }
    else{
        cout<<(n-(minindex+1))+maxindex-1;
    }
    return 0;
}