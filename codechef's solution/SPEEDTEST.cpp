#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,x,b,y;
        cin>>a>>x>>b>>y;
        if((a/x)<(b/y))
        {
            cout<<"Bob"<<endl;
        }
        else if((a/x)>(b/y))
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Equal"<<endl;
        }

    }

return 0;
}
