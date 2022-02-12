#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    string line;
    cin>>line;
    int len=line.length();
    int check=0;
    for(int i=97;i<=122;i++){
        check=0;
        for(int j=0;j<len;j++){
            if(char(i)==line[j]||char(i-32)==line[j]){
                check=1;
            }
        }
        if(check==1){
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