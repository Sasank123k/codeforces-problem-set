#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string name;
    getline(cin,name);
    int ununique=0;
    for(int i=0;i<name.size();i++){
        int count=0;
        for(int j=0;j<name.size();j++){
            if(name[i]==name[j]){
                count++;
            }
        }
        if(count>1){
            ununique+=count-1;
        }
    }
    cout<<name.size()-ununique;
    return 0;
}