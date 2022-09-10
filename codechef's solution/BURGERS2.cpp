#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    int x,y,n,r;
    cin>>x>>y>>n>>r;

    if((r/y)>=n)
    {
        cout<<0<<" "<<n<<endl;
    }
    else if((r/x)<n)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int a= y*n;
        int b= x-y;
        int c= (r-a)/b;

         if((r-(a))%(b)!=0)
         {
             c=c+1;
         }
         cout<<c<<" "<<n-c<<endl;
    }


}
return 0;
}
