#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        for(int i=0; i<y; i++){
            x=x+1;
        }
        if(x%2==0){
            cout<<"Janmansh"<<endl;
        }
        else{
            cout<<"Jay"<<endl;
        }
    }

return 0;
}
