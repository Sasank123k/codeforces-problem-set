#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tempa=0;
    int tempb=n-1;
    int s=0,d=0;
    int cnt=0;
    while(tempa<=tempb){
        if(cnt==0){
            if(arr[tempa]<arr[tempb]){
                s+=arr[tempb];
                tempb--;
            }
            else{
                s+=arr[tempa];
                tempa++;
            }
            cnt=1;
        }
        else{
            if(arr[tempa]<arr[tempb]){
                d+=arr[tempb];
                tempb--;
            }
            else{
                d+=arr[tempa];
                tempa++;
            }
            cnt=0;
        }
    }
    cout<<s<<" "<<d;
    return 0;
}