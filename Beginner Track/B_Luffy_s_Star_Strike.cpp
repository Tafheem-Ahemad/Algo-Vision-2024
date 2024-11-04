
/*

Topic: Implementation and Pattern Printing
Solution:
	if  number is even then print "NO" 
	else print "YES" and print the pattern as per the question.

	Time complexity : O(n^2)
*/


#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main(){
	fast();

	int n;
	cin>>n;

	if(n%2==0){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;

		for(int i = 0; i < n; i++){
            if(i == 0 || i == n - 1 || i == n / 2){
                for(int j = 0; j < n; j++){
					cout << "*";
				}
            }
            else{
                for(int j = 0; j < n; j++){
                    if(j == 0 || j == n - 1 || j == n / 2){
						cout << "*";
					}
					else{
						cout << " ";
					}
                }
            }
            cout << endl;
        }
	}
	

	return 0;
}