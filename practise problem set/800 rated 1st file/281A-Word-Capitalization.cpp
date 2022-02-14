#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;
    char c;
    getline(cin,word);
    if(int(word[0])>92){
        c=word[0]-32;
        word[0]=c;
    }
    cout<<word;
    return 0;
}