#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int ans=0;
    int temp=1;
    int time=240-t;
    while(time>0 && ans<n){
        time-=5*temp;
        if(time>=0){
        temp++;
        ans++;
        }
    }
    cout<<ans;
    return 0;
}