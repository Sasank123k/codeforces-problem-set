#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int k,r;
    cin>>k>>r;
    int temp=k;
    int ans=1;
    while(!(k%10==0||k%10==r)){
        k+=temp;
        ans++;
    }
    cout<<ans;
    return 0;
}