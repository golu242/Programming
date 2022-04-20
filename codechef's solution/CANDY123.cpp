#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int i = 1;
        while(a>=0 && b>=0){
            if(i%2==0) b-=i;
            else a-=i;
            i++;
        }
        if(a<0)cout<<"Bob";
        else cout<<"Limak";
        cout<<endl;
    }
return 0;
}
