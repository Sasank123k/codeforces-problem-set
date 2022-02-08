#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int temp=0;
    int count1=0,count2=0,count3=0;
    for(int i=0;i<s.size();i+=2){
        if(s[temp]=='1'){
            count1++;
        }
        else if(s[temp]=='2'){
            count2++;
        }
        else{
            count3++;
        }
        temp+=2;
    }
    
    if(count2==0 && count3==0 && count1==1 ){
        cout<<"1";
    }
    else if(count2==0 && count3==0 && count1>1 ){
        for(int i=0;i<count1-1;i++){
        cout<<"1+";
    }
    cout<<"1";
    }
    else{
        for(int i=0;i<count1;i++){
        cout<<"1+";
    }
    }
    if(count3==0 && count2==1){
        cout<<"2";
    }
    else if(count3==0 && count2>1){
        for(int i=0;i<count2-1;i++){
        cout<<"2+";
    }
    cout<<"2";
    }
    else{
        for(int i=0;i<count2;i++){
        cout<<"2+";
    }
    }
    for(int i=0;i<count3-1;i++){
        cout<<"3+";
    }
    if(count3>0){
        cout<<"3";
    }

    
    return 0;
}