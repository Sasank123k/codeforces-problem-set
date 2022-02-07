#include<iostream>
#include<string>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int temp=s.size()-1;
    if(k==0){
        cout<<1<<endl;
    }
    else{
        for(int i=0;i<=((s.size())/2);i++){
            if(s[i]==s[temp]){
        }
            else{
                cout<<2<<endl;
                return ;
            }
            temp--;
        }
        cout<<1<<endl;
    }
    return ;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}