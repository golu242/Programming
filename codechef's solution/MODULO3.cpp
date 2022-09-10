#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,i,j=0;
        cin>>a>>b;
        for(i=0;; i++)
        {
            if(a%3==0 || b%3==0)
            {
                break;
            }
            else
            {
                if(a>b)
                {
                    a=a-b;
                }
                else
                {
                    b=b-a;
                }
                j++;
            }
        }
        cout<<j<<endl;
    }
return 0;
}
