/*

Topic :- Implementation

Approach :-
--> If n is divisible by 7 then print "THALA FOR A REASON" else print "THALA FOR NO REASON".

   Time complexity : O(1) per test case
*/


#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main(){
	fast();

   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      if(n%7){
      cout<<"THALA FOR NO REASON"<<endl;
      }
      else{
      cout<<"THALA FOR A REASON"<<endl;
      }
   }

	return 0;
}
