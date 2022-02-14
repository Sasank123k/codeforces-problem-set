#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string word;
    getline(cin,word);
    int upper=0,lower=0;
    for(int i=0;i<word.size();i++){
        if(word[i]>92){
            lower++;
        }
        else{
            upper++;
        }
    }
        if(lower>=upper){
            for(int i=0;i<word.size();i++){
                if(word[i]<=92){
                    char a = word[i];
                    word[i]=a+32;
                }
               
            }
        }
        else{
            for(int i=0;i<word.size();i++){
                if(word[i]>92){
                    char a= word[i];
                    word[i]=a-32;
                }
            }
        }
        
    
    cout<<word;
    return 0;
}