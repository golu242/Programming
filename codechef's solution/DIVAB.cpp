#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    int a,b,n;
    cin>>a>>b>>n;

    if(a%b==0)
    {
        cout<<-1<<endl;
        continue;
    }
    int c=n;
    if(c%a!=0)
    {
        c= n+a-(c%a);
    }
    while(!(c%a==0 && c%b!=0))
    {
        c=c+a;
    }
    cout<<c<<endl;

}
return 0;
}
