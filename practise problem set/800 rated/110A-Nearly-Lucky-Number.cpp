#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string number;
    cin>>number;
    int len=number.length();
    int counter=0;
    for(int i=0;i<len;i++){
        if(number[i]=='4' || number[i]=='7'){
            counter++;
        }
    }
    if(counter==0){
            cout<<"NO";
            return 0;
        }
    while(counter>0){
        if(counter%10==4||counter%10==7){
            counter/=10;
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