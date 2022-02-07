#include<iostream>
#include<cmath>
using namespace std;
void solve(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k=0;
    int max=INT_FAST8_MIN;
    for(int &x:arr){
        while(x%2==0 && x>1){
            x/=2;
            k++;
        }
        if(x>max){
            max=x;
        }
    }
    for(int &x:arr){
        if(x==max){
            x=x*pow(2,k);
            break;
        }
        
    }
    long long  sum=0;
    for(int x:arr){
        sum+=x;
    }
    cout<<sum<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}