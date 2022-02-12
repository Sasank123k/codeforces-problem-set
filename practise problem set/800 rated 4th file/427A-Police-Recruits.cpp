#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int police=0;
    for(int i=0;i<n;i++){
        int inp;
        cin>>inp;
        if(inp>0){
            police+=inp;
            continue;
        }
        else{
            
            if(police>0){
                police-=1;
                continue;
            }
            ans++;
        }
    }
    cout<<ans;
    return 0;
}