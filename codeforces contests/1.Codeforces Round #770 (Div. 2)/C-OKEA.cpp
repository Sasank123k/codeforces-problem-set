#include<iostream>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    int tempk=k;
    if(k==1){
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++){
            cout<<i<<endl;

        }
        return ;
    }
    else if(n%2==0){
        cout<<"YES"<<endl;
        for(int i=1;i<=(n*k);i+=2){
            if(tempk==0){
                cout<<endl;
                tempk=k;
            }
            cout<<i<<" ";
            tempk--;
        }
        cout<<endl;
        tempk=k;
        for(int i=2;i<=(n*k);i+=2){
            if(tempk==0){
                cout<<endl;
                tempk=k;
            }
            cout<<i<<" ";
            tempk--;
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}