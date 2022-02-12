#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    string games;
    cin>>games;
    int len=games.length();
    int anton=0,danik=0;
    for(int i=0;i<len;i++){
        if(games[i]=='A'){
            anton++;
        }
        else{
            danik++;
        }

    }
    if(anton>danik){
        cout<<"Anton";
    }
    else if(danik>anton){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}