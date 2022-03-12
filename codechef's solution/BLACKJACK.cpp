#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b;
        c = 21 - (a+b);
        if(c<=10){
            cout<< c <<endl;

        }
        else{
            cout<< -1 <<endl;

        }
    }
return 0;
}
