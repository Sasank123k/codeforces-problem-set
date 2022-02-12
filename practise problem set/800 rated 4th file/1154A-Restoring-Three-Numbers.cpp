#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int max=(a>b&&a>c&&a>d)?a:(b>c&&b>d)?b:(c>d)?c:d;
    if(a!=max){
        cout<<max-a<<" ";
    }
    if(b!=max){
        cout<<max-b<<" ";
    }
    if(c!=max){
        cout<<max-c<<" ";
    }
    if(d!=max){
        cout<<max-d<<" ";
    }
    return 0;
}