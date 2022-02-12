#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string line;
    getline(cin,line);
    int count=0;
    int len=line.length();

    for(int i=97;i<=122;i++){
        for(int j=0;j<len;j++){
            if(char(i)==line[j]){
                count++;
                break;
            }
        }
    }
    cout<<count;
    return 0;
}