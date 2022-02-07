#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        unsigned long long int x1,x2,p1,p2,diff;
        cin >> x1 >> x2 >> p1 >> p2;
        unsigned long long int num1,num2;
        
        
        if(x2>p2){
            diff=x2-p2;
            if(diff>=7){
                cout<<">"<<endl;
                continue;
            }
            for(int i=1;i<=diff;i++){
            x1*=10;
        }
        }
        else if(p2>x2){
            diff=p2-x2;
            if(diff>=7){
                cout<<"<"<<endl;
                continue;
            }
            for(int i=1;i<=diff;i++){
            p1*=10;
        }
        }
        
        
        
        num1=x1;
        num2=p1;
        if(num1<num2){
            cout<<"<"<<endl;
        }
        else if(num2<num1){
            cout<<">"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
    }
    return 0;
}