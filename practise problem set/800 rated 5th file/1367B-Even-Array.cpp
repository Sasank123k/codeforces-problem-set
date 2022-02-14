#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==i%2){
            continue;
        }
        else{
            if(i%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
    }
    if(even==odd){
        cout<<even<<endl;
    }
    else{
        cout<<-1<<endl;
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