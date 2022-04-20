#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        int k;
        if(y%x==0){
            k=y/x;
            k-=1;
        }
        else k=y/x;
        cout<<k<<endl;

    }
return 0;
}

