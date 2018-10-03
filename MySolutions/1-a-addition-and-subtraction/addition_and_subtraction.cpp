#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    int result = -1;

    //////////////////////////////////
    int n1,n2;
    if(z%(x-y)==0){
    		n1 = z/(x-y) + 1;
    		n1 = 2*(n1-1);
    	}
    	else
    		n1 = 100000000;
    	if((z-x)%(x-y)==0){
    		n2 = (z-x)/(x-y) + 1;
    		n2 = 2*n2-1;
    	}
    	else 
    		n2 = 100000000;
    	if(n1<n2) result = n1;
    	else if(n2<n1) result = n2;
    //////////////////////////////////

    cout << result << "\n";
    return 0;
}