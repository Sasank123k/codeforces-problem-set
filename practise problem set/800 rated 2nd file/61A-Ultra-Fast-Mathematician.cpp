#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string s1,s2,ans;
    cin>>s1;
    cin>>s2;
    int len=s1.length();
    for(int i=0;i<len;i++){
        if(s1[i]==s2[i]){
            ans+='0';
        }
        else{
            ans+='1';
        }
    }
    cout<<ans;
    return 0;
}