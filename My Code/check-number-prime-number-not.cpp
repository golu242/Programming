#include<iostream>
using namespace std;
int main()
{

int i,n;
cout<<"Enter any positive number\n";
cin>>n;
if(n==1)
{
cout<<"\nSmallest prime number is, 2";
}
for(i=2;i<n;i++)
{
  if(n%i==0)

{
cout<<"\nThe Entered number ["<<n<<"] is not a prime number.\n";
break;
}
}
if(n==i)
{
cout<<"\nThe Entered number["<<n<<"] is prime number\n";

}

return 0;


}
