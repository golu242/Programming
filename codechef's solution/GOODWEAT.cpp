#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e,f,g;
        cin>>a>>b>>c>>d>>e>>f>>g;
        int sum = a+b+c+d+e+f+g;
        if(sum>=4){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
return 0;
}
