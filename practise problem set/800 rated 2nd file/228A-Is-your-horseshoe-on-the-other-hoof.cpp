#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    long long int a,b,c,d;
    long long int arr[4];
    long long int temp=4;
    long long int ans=0;
    int fix=0;
    
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    for(long long int x:arr){
        ans=0;
        for(int i=0;i<4;i++){
            if(x==arr[i]){
                ans++;
            }
        }
        if(ans==2){
            fix++;
        }
        if(ans==1){
            temp--;
        }
        if(fix==4){
            temp--;
        }
   }
   if(temp>0){
       cout<<temp-1;
   }
   else{
       cout<<0;
   }
    
    return 0;
}