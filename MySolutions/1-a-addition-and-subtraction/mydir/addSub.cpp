using namespace std;
#include <bits/stdc++.h>
int main(){
	#ifndef ONLINE_JUDGE
    freopen("testInput.txt", "r", stdin);
    freopen("testOutput.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,z,n1,n2;
    while(cin>>x>>y>>z){
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
    	if(n1<n2) cout<<n1;
    	else if(n2<n1) cout<<n2;
    	else cout<<"-1";
    	//cout<<n1<<" "<<n2;
    	cout<<"\n";
    }
	return 0;
}