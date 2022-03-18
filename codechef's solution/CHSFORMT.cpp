#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int c = a+b;
        if(c<3){
            cout<<1<<endl;

        }
        else if(c>=3 && c<=10){
            cout<<2<<endl;
        }
        else if(c>=11 && c<=60){
            cout<<3<<endl;
        }
        else if(c>60){
            cout<<4<<endl;
        }
    }
return 0;
}
