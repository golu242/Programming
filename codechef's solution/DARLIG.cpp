#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
    cin>>n>>k;
    if(n%4==0)
    {
        if(k==0)
        {
            cout<<"Off"<<endl;
        }
        else{
            cout<<"On"<<endl;
        }
    }
    else{
        if(k==0)
        {
            cout<<"On"<<endl;
        }
        else{
            cout<<"Ambiguous"<<endl;
        }
    }
    }


return 0;
}
