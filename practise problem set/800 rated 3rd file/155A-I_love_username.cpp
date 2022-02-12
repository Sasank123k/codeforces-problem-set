#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int max,min;
    int score;
    cin>>score;
    max=score;
    min=score;
    int ans=0;
    for(int i=0;i<n-1;i++){
        cin>>score;
        if(score>max){
            max=score;
            ans++;
        }
        else if(score<min){
            min=score;
            ans++;
        }
        else{
            continue;
        }
    }
    cout<<ans;
    return 0;
}