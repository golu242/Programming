#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int p,q,a;
        cin>>p>>q;
        a=(p+q)/2;

        if(a%2 ==0)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}
