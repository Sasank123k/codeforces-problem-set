#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int x;
        cin>>x;
        int ans=((x%10)-1)*10;
        int digit=0;
        while(x>0){
            x/=10;
            digit++;
        }
        ans+=(digit==1)?1:(digit==2)?3:(digit==3)?6:10;
        cout<<ans<<endl;
    }
    return 0;
}