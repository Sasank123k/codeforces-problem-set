#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==0){
            continue;
        }
        else{
            cout<<"Hard";
            return 0;
        }
    }
    cout<<"EASY";
    return 0;
}