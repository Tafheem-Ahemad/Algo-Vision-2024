/*


Topic: Greedy , Math , Implementation


Approach:
	-->if b-k < a then we can do only operation 1 , steps will increase by b-k
	--> otherwise we can do operation 2 , we will find the maximum number that can be added to k such that it is less than and equal to b
	--> for finding the maximum number that can be added to k such that it is less than and equal to b , that can be done by multiplying a by 10 until a+b is less than or equal to b with burte force approach and it runs in O(log n) time


	Time complexity: O(log n * log n)  per test case
*/




#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

long long solve(long long k,long long a,long long b){
	long long ans=0;
	while(k+a <= b){
		ans=a;
		a*=10;
	}

	return ans;
} //O(log n)

int main(){
	fast();

	int t;
	cin>>t;

	while(t--){
		long long a,b;
		cin>>a>>b;

		long long steps=0;
		long long k=0;


		while(k != b){
			if(b-k < a){
				steps+=b-k; // opration 1 // increment by 1
				break; 
			}else{
				long long found_max_can_do = solve(k,a,b);
				steps++; // operation 2 // maximum that  can be increse
				k+=found_max_can_do;
			}
		}

		cout<<steps<<endl;
	}

	return 0;
}