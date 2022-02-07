#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int test;
    cin>>test;
    int a,b,c;
    int tempa,tempb,tempc;
    int max;
    while(test--){
        int check=0;
        cin>>a>>b>>c;
        tempa=b-(c-b);
        if(tempa%a==0 && tempa/a>0){
            cout<<"yes"<<endl;
            continue;
        }
        tempb=(c+a)/2;
        if(tempb%b==0 && tempb/b>1 && (tempb-a)==(c-tempb)){
            cout<<"yes"<<endl;
            continue;
        }
        tempc=b+(b-a);
        if(tempc%c==0 && tempc/c>0){
            cout<<"yes"<<endl;
            continue;
        }
        cout<<"no"<<endl;

    }
    return 0;

}