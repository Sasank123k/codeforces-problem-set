#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string queue;
    cin>>queue;
    string duplicate=queue;
    int len=queue.length();
    while(t--){
        for(int i=0;i<len-1;i++){
            if(queue[i]=='B'&&queue[i+1]=='G'){
                duplicate[i]='G';
                duplicate[i+1]='B';
            }
        }
        queue=duplicate;
    }
    cout<<duplicate;
    return 0;
}