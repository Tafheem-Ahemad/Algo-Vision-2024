
/*

Topic : Number Theory , Modulo Arithmetic , Inverse Modulo

if we concatenate n with n , then resulant number will be n*(10^size_of_n)+n

so if we conacatenate n with n time and simplyfy it then we get a Geometric Progression Series
whose a(fisrt term) is n and r(common ratio) is 10^(size_of_n) ,with n terms

so sum of this series is n*((r^size_of_n)-1)/(r-1) , so we can calculate this sum by using modulo arithmetic and inverse modulo

Time complexity : O(logn) per test case
*/


#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
const int mod=1e9+7;

long long power(long long a,long long n){
	a=a%mod;
	long long res=1;
	while(n>0){
		if(n%2){
			res=(res*a)%mod;
			n--;
		}else{
			a=(a*a)%mod;
			n/=2;
		}
	}

	return res;
}

long long modInverse(long long a){
	return power(a,mod-2);
}

void solve(){
	long long  n;
	cin>>n;
 
	long long sz=to_string(n).size();
 
	long long r=power(10,sz);
 
	long long num1=power(r,n);
	num1--;
	num1=(num1+mod)%mod;
 
	long long deno=r-1;
	deno=(deno+mod)%mod;
 
	long long rev=power(deno,mod-2);
 
	long long ans=(rev*num1)%mod;
 
	n%=mod;
	ans*=n;
	ans%=mod;
 
	cout<<ans<<endl;
}

int main(){
	fast();

	int testcase;
	cin>>testcase;
	while(testcase--){
		solve();
	}

	return 0;
}
