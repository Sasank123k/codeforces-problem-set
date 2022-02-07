#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int inp;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>inp;
            if(inp==1){
                cout<<(max(j,3)-min(j,3))+(max(i,3)-min(i,3))<<endl;
            }
        }
    }
    return 0;
}