
/*

Topic: Strings , Implementation
Approach:
	--> Check if all the digits are same or not.
	--> Check if the digits are in increasing order or not.
	--> If both the conditions are satisfied then print "Weak" else print "Strong".
	Time complexity : O(1)

*/


#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main(){
	fast();

	string s;
	cin>>s;

	int a=s[0]-'0';
	int b=s[1]-'0';
	int c=s[2]-'0';
	int d=s[3]-'0';

	if(a==b && b==c && c==d){
		cout<<"Weak"<<endl;
		return 0;
	}

	if((b==(a+1)%10) && (c==(b+1)%10) && (d==(c+1)%10)){
		cout<<"Weak"<<endl;
		return 0;
	}

	cout<<"Strong"<<endl;
	

	return 0;
}