#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t,n;
    cin>> t;
    while(t--){
        int a,b,c;
        cin>>n;
        for(int i=1;i<n;i++){
            if(n%i==0){
                c=i;
                a=c+c;
                b=a+c;
                while((a+b+c!=n || (__gcd(a,b)!=c))){
                    a+=c;    
                    b=n-(a+c);
                }

            }
            if(a+b+c==n && (__gcd(a,b)==c)&& a!=b && b!=c && a!=c){
                cout<<a<<" "<<b<<" "<<c<<endl;
                break;
            }
        }
    }
    return 0;
}