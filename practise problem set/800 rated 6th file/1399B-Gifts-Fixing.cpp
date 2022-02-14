#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int mina=INT8_MAX;
    int minb=INT8_MAX;
    int arra[n];
    int arrb[n];
    int checka=0;
    int checkb=0;
    for(int i=0;i<n;i++){
        cin>>arra[i];
        if(checka==0){
            mina=arra[i];
            checka=1;
        }
        if(arra[i]<mina){
            mina=arra[i];
        }
    }
    for(int i=0;i<n;i++){
        cin>>arrb[i];
        if(checkb==0){
            minb=arrb[i];
            checkb=1;
        }
        if(arrb[i]<minb){
            minb=arrb[i];
        }
    }
    long long int ans=0;
    long long int sum=0;
    for(int i=0;i<n;i++){
        int a=0,b=0;
        if(arra[i]>mina){
            a=arra[i]-mina;
        }

        if(arrb[i]>minb){
            b=arrb[i]-minb;
        }
        ans=((a>b)?a:b);
        sum+=ans;
    }
    cout<<sum<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}