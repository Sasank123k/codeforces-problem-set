#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(char c='A';c<='Z';c++){
        int first=n;
        int last=-1;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                first=min(first,i);
                last=max(first,i);
            }
        }
        for(int i=first;i<=last;i++){
            if(s[i]!=c){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
    return;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}