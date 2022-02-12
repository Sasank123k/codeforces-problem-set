#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string s,t;
    cin>>s;
    cin.ignore();
    cin>>t;
    int len=s.length();
    int temp=len-1;
    for(int i =0;i<len;i++){
        if(s[i]==t[temp]){
            temp--;
            continue;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}