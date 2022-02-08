#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int tempa=1;
    int tempb=1;
    int len=s.length();
    int ab=0,ba=0;
    for(int i=0;i<len-1;i++){
        if(s[i]=='a'&&s[tempa]=='b'){
            ab++;
        }
        if(s[i]=='b'&&s[tempa]=='a'){
            ba++;
        }
        tempa++;
        tempb++;
    }
    
    int cnt1=1,cnt2=2;
    
    if(ab>ba){
        s[len-1]='a';
    }
    else if(ba>ab){
        s[len-1]='b';
    }
    else{
        cout<<s<<endl;
        return;
    }
    cout<<s<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}