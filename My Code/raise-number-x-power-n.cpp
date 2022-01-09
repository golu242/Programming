#include<iostream>
using namespace std;
#include<math.h>
int main(){

int x,n,result;
cout<<"Enter value of x\n";
cin>>x;
cout<<"Enter value of n\n";
cin>>n;

result=pow(x,n);
cout<<"The power of number ["<<x<<" ^ "<<n<<"] = "<<result<<"\n";


return 0;
}
