#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    string x="0";
    int cnt=0;
    for(int i=0;i<n;i++){
        string s;
        
        cin>>s;
        if(s!=x){
            cnt++;
        }
        x=s;

    }
    cout<<cnt;
    return 0;
}