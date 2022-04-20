#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int a=z-y/x;
        if(a<0){
            cout<<0<<endl;

        }
        else{
            cout<<a<<endl;
        }
    }
return 0;
}
