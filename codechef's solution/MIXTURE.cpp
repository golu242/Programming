#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a+b==a){
            cout<<"Solid"<<endl;

        }
        else if(a+b==b){
            cout<<"Liquid"<<endl;
        }
        else{
            cout<<"Solution"<<endl;
        }
    }
return 0;
}

