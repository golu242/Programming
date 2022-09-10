#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,c;
        cin>>x>>y;
        c = (y-x)/8;
        if(y-x==0){
            cout<<"0"<<endl;
        }
        else if((y-x)<=8){
            cout<<"1"<<endl;
        }
        else if((y-x)%8==0){
            cout<<c<<endl;
        }
        else if((y-x)>8){
            cout<<c+1<<endl;
        }


    }
return 0;
}
