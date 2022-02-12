#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int checker;
    if(n%2==0){
        checker=n-2;
    }
    else{
        checker=n-1;
    }
    for(int i=0;i<checker/2;i++){
        cout<<"I hate that I love that ";
    }
    if(n%2==0){
        cout<<"I hate that I love it";
    }
    else{
        cout<<"I hate it";
    }
    return 0;
}