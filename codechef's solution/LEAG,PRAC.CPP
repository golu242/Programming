#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a = (n-1)*3;
        int b = ((n-1)*(n-2))/2 ;
        int c = b%(n-1);
        if(c==0){
            cout<<a-(c*3)<<endl;
        }
        else{
            cout<<a-((c+1)*3)<<endl;
        }

    }
    return 0;

}
