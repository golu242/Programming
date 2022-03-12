#include<bits/stdc++.h>
using namespace std;
int main(){
  int x;
  float y;
  cin>>x;
  cin>>y;
  int remainder = x%5;
  if(remainder==0 && x+.5 <= y )
  {
    float balance = y - x - .5;
    cout<<fixed<<setprecision(2)<<balance;
  }

else
{
  cout<<fixed<<setprecision(2)<<y;
}
return 0;

}
