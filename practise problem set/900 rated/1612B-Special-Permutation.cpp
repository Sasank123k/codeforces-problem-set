#include<iostream>
using namespace std;
void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    int temp=1;
    int arr[n]={a};
    for(int i=n;i>0;i--){
        if(i!=a && i!=b){
            arr[temp]=i;
            temp++;
        }

    }
    for(int i=0;i<n/2;i++){
        if(arr[i]<a){
            cout<<"-1"<<endl;
            return;
        }
    }
    for(int i=n/2;i<n;i++){
        if(arr[i]>b){
            cout<<"-1"<<endl;
            return;
        }
    }
    arr[n-1]=b;
    for(int x :arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return ;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
}