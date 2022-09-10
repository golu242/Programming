#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x>y)
        {
            if(x%10==0 && y%10==0)
            {
                cout<<(x/10) - (y/10)<<endl;
            }
            else if(x%10==0 && y%10 !=0)
            {
                cout<<(x/10)-(y/10 +1)<<endl;
            }
            else if(x%10 !=0 && y%10==0)
            {
                cout<<(x/10 +1)-(y/10)<<endl;
            }
            else
            {
                cout<<(x/10 +1)-(y/10 +1)<<endl;
            }
        }
        else
        {
            if(y%10==0 && x%10==0)
            {
                cout<<(y/10) - (x/10)<<endl;
            }
            else if(y%10==0 && x%10 !=0)
            {
                cout<<(y/10)-(x/10 +1)<<endl;
            }
            else if(y%10 !=0 && x%10==0)
            {
                cout<<(y/10 +1)-(x/10)<<endl;
            }
            else
            {
                cout<<(y/10 +1)-(x/10 +1)<<endl;
            }
        }
    }
return 0;
}

