
/*

Topic : Number Theory , Contructive Algorithm

Approach : 
	if it is possible to represent the prime number n as the sum of two prime numbers 
	then (n-2) and 2 must be one of the possible option (may be other possible option exit)

	Time complexity : O(sqrt(n))

*/



#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


bool isPrime(long long n){
	if(n==1) return false;
	if(n==2) return true;
	if(n%2==0) return false; // if number is even then it is not prime

	for(long long i=3; i*i<=n ;i+=2){
		if(n%i==0) return false;
	}

	return true;
}

void solve(){
	long long n;
	cin>>n;

	if(n<=3){
		cout<<"NO"<<endl;
		return;
	}

	if(isPrime(n-2)){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}


int main(){
	fast();

	int t;
	cin>>t;
	while(t--){
		solve();
	}

	return 0;
}
