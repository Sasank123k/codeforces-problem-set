#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void solve(){
    string word;
    cin>>word;
    for(int i=0;i<word.length();i+=2){
        cout<<word[i];
    }
    cout<<word[word.length()-1];
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
    return 0;
}