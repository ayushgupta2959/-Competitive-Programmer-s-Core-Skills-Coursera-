using namespace std;
#include <bits/stdc++.h>
int main(){
	#ifndef ONLINE_JUDGE
    freopen("testInput.txt", "r", stdin);
    freopen("testOutput.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 	string s;
 	int l,flag;
 	while(cin>>s){
	 	l = s.length();
	 	flag=0;
	 	for(auto x:s){
	 		if(x!='9') {
	 			flag=1;
	 			break;
	 		}
	 	}
	 	if(flag) cout<<l<<"\n";
	 	else cout<<(l+1)<<"\n";
	}
	return 0;
}
