#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int count=0;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        if(x>b){
            count+=2;
        }
        else{
            count++;
        }
    }
    cout<<count;
    return 0;
}