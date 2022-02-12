#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b;
    cin>>a>>b;
    string arr[a];
    string inp;
    for(int i=0;i<a;i++){
        
        getline(cin,inp);
        arr[i]=inp;
        cin.ignore();
    }
    int c,d;
    for(auto x:arr){
        cout<<x<<endl;
    }
    return 0;
}