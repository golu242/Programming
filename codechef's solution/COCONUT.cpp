#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int sum = c/a + d/b;
        cout<<sum<<endl;
    }
return 0;
}
