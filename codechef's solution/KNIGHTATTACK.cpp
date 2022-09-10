#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2,s;
        cin>>x1>>y1;
        cin>>x2>>y2;

        if(x1==x2 || x1>x2 || x2>x1)
            s= y2%2;
        if(s==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
return 0;
}
