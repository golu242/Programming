#include <iostream>
using namespace std;

int main() {
    int x,y,c,r,o;
	cin>>r>>o>>c;
	x=(20-o)*36;
	y=c+x;
	if(r<y)
        cout<<"yes";
	else
	    cout<<"no";
	return 0;
}
