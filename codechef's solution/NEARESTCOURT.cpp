#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x<y && (x+y)%2==0)
        {
            cout<<(x+y)/2-x<<endl;

        }
        else if(x>y && (x+y)%2==0)
        {
           cout<<(x+y)/2-y<<endl;
        }
        else if(x<y && (x+y)%2!=0)
        {
            cout<<(x+y)/2-x+1<<endl;
        }
        else if(x>y && (x+y)%2!=0)
        {
            cout<<(x+y)/2-y+1<<endl;
        }


    }

return 0;
}
