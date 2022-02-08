#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int sum=0;
    for(int i=1;i<=w;i++){
        sum+=k*i;
    }
    int ans;
    ans=sum-n;
    if(ans>0){
        cout<<ans;
    }
    else{
        cout<<0;
    }
    return 0;
}