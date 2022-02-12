#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int cash;
    cin>>cash;
    int ans=0;
    while(cash!=0){
        if(cash>=100){
            cash-=100;
            ans++;
        }
        else if(cash>=20){
            cash-=20;
            ans++;
        }
        else if(cash>=10){
            cash-=10;
            ans++;
        }
        else if(cash>=5){
            cash-=5;
            ans++;
        }
        else if(cash>=1){
            cash-=1;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}