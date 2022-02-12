#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int j,k;
    cin>>j>>k;
    int check=0;
    for(int i=1;i<=j;i++){
        if(i%2!=0){
            for(int m=0;m<k;m++){
                cout<<"#";
            }
            cout<<endl;
            continue;
        }
        else{
            if(check==0){
                for(int m=0;m<k-1;m++){
                    cout<<".";
                }
                cout<<"#"<<endl;
                check=1;
                continue;
            }
            else{
                cout<<"#";
                for(int m=0;m<k-1;m++){
                    cout<<".";
                }
                check=0;
                cout<<endl;
            }
        }
    }
    return 0;
}