#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    int max=0;
    int sum=0;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        
        sum+=(b-a);
        if(sum>max){
            max=sum;
        }
    }
    cout<<max;
    return 0;
}