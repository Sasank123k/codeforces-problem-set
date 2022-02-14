#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int cnt=0;
    int teams=0;
    for(int i=0;i<n;i++){
        int check;
        cin>>check;
        if(check+k<=5){
            cnt++;
        }
        if(cnt==3){
            teams++;
            cnt=0;
        }
    }
    cout<<teams;
    return 0;
}