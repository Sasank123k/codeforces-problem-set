#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;

int main(){
    double n;
    cin>>n;
    double x;
    double ans=0;
    for(int i=0;i<n;i++){
        cin>>x;
        ans+=x/100;
    }
    cout<<100*(ans/n);
    return 0;
}