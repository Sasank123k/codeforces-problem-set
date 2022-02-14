#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        long double n;
        cin>>n;
        cout<<int(ceil(n/2))<<endl;
    }
    return 0;
}