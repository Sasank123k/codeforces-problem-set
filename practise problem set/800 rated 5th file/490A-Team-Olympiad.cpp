#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0,b=0,c=0;
    int arr[n];
    int a1[5000];
    int b2[5000];
    int c2[5000];
    int chk1=0;
    int chk2=0,chk3=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            a++;
            a1[a-1]=i+1;
            chk1=1;
        }
        if(arr[i]==2){
            b++;
            b2[b-1]=i+1;
            chk2=1;
        }
        if(arr[i]==3){
            c++;
            c2[c-1]=i+1;
            chk3=1;
        }
    }
    if(chk1==1&&chk2==1&&chk3==1){
    int ans=((a<=b&&a<=c)?a:(b<=c)?b:c);
    cout<<ans<<endl;
    for(int z=0;z<ans;z++){
        cout<<a1[z]<<" "<<b2[z]<<" "<<c2[z]<<endl;
    }
    }else{
        cout<<0;
    }
    return 0;
}