#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;

        int c = 500 - (x*2);
        int d = 1000 - (x+y)*4;
        int f = c+d;

        int g = 1000 - (y*4);
        int h = 500 - (x+y)*2;
        int i = g+h;

        if(f>=i){
            cout<<f<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
return 0;
}
