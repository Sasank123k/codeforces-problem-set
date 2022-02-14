#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0,b=0;
    for(int i=0;i<n;i++){
        int c,d;
        cin>>c>>d;
        if(c<d){
            b++;
        }
        else if(c>d){
            a++;
        }
        else{
            continue;
        }
    }
    if(a>b){
        cout<<"Mishka"<<endl;
    }
    else if(a<b){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}