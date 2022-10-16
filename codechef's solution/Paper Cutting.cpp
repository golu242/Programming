#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin>>N;
        cin>>K;
        cout<<(N/K)*(N/K)<<endl;
    }
    return 0;
}
