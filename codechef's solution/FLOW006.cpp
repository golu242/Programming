#include<iostream>

using namespace std;

int main(){

int t, num;
int sum =0;
cin>>t;

while (t > 0)
{
    cin>>num;
    while(num>0)
    {
        sum = sum + num % 10;
        num = num/ 10;

    }

    cout<<sum<<endl;
    sum = 0;
    t--;

}

return 0;
}
