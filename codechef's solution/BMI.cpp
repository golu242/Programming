#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, h;
        cin>>m>>h;
        int x = m/(h*h);
        if(x<=18){
            cout<<1<<endl;
        }
        else if(x>=19 && x<=24){
            cout<<2<<endl;

            }
            else if(x>=25 && x<=29){
                cout<<3<<endl;
            }
            else if(x>=30){
                cout<<4<<endl;
            }
    }
return 0;
}
