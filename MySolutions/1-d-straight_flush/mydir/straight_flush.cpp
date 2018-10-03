using namespace std;
#include <bits/stdc++.h>

int deck[14];
string str;

bool process(){
	if((str[1]==str[4])&&(str[4]==str[7])&&(str[7]==str[10])){

	}
	return false
}

int main(){
	#ifndef ONLINE_JUDGE
    freopen("testInput.txt", "r", stdin);
    freopen("testOutput.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 	while(cin>>str){
 		if(!process()) cout<<"NO\n";

 	}
	return 0;
}
