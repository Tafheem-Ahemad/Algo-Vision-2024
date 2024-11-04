/*

Logic : Implementation
	Just print the input string until it is not "stop".

*/

#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main(){
	fast();

	while(true){
		string s;
		cin>>s;

		cout<<s<<endl;
		if(s=="stop"){
			break;
		}
	}

	return 0;
}