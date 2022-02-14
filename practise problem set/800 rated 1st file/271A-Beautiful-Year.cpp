#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int year;
    cin>>year;
    year++;
    int a=year%10;
    int b=(year/10)%10;
    int c=(year/100)%10;
    int d=year/1000; 
    
    while(a==b || b==c || c==d || a==c || a==d || b==d ){
        year++;
        a=year%10;
        b=(year/10)%10;
        c=(year/100)%10;
        d=year/1000;
    }
    cout<<year;

    return 0;
}
