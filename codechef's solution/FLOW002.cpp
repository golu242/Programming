#include<iostream>

using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    int a,b,c,d;
    cin>>a;
    cin>>b;
    if(a>=b){
        c=a%b;
        cout<< c << endl;

    }
    else
    {
        d=a%b;
        cout<< d << endl;
    }
}

return 0;


}
