#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void solve(){
    int num;
    cin>>num;
    int arr[5];
    int k=0;
    int temp=1;
    while(num>0){
        int rem=num%10;
        num/=10;
        if(rem==0){
            temp*=10;
            continue;
        }
        else{
            arr[k]=rem*temp;
        }
        temp*=10;
        k++;
    }
    cout<<k<<endl;
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
        
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