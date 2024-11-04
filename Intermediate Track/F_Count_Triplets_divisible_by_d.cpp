/*

This question is a advance version of "https://leetcode.com/problems/subarray-sum-equals-k/"

We should fix two index in the array , then find the third element in the  rest of the array
such that the sum of the three elements is divisible by k.We can use map to solve this problem.

	Time complexity : O(n^2 *logn)
*/


#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main(){
	fast();

	long long n,k;
	cin>>n>>k;

	vector<long long> v(n);
	for(long long i=0;i<n;i++){
		cin>>v[i];
	}

	long long count=0;
	map<long long,long long> mp;

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			long long re=k-(v[i]+v[j])%k;
			re%=k;
			count+=mp[re];
		}

		mp[v[i]%k]++;
	}

	cout<<count<<endl;

	return 0;
}