
/*

Topic : Implementation
Approach : 
	--> If n is even then divide n by 2 else multiply n by 3 and add 1.
	--> Repeat the above step until n becomes 1.
	--> Print the numbers generated in each step.

	--> We can use while loop or recursion to solve this problem.
	--> use long long data type , element can be overflow.

	Time complexity : O(logn)
*/



#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main(){
	fast();

	long long n;
	cin>>n;

	while(n!=1){
		cout<<n<<' ';
		if(n%2==0){
			n/=2;
		}else{
			n=(n*3)+1;
		}
	}
	cout<<"1 "<<endl;

	return 0;
}