/*

Logic : Binary Search
	For any query x, if for specific distance d, there are atleast k elements in the range [x-d,x+d] then d may be the answer. else we will try for d+1.

	Time complexity : O(nlogn+qlogn)
	Per query time complexity : O(logn)
*/


#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

long long count_element_between_range(long long l,long long r,vector<long long> &v){
	long long it1=lower_bound(v.begin(),v.end(),l)-v.begin();
	long long it2=upper_bound(v.begin(),v.end(),r)-v.begin();
	return it2-it1;
}

int main(){
	fast();

	long long n,k,q;
	cin>>n>>k>>q;

	vector<long long> v(n);
	for(long long i=0;i<n;i++){
		cin>>v[i];
	}


	while(q--){
		long long x;
		cin>>x;

		long long l=0,r=1e12;
		long long ans=-1;
		while(l<=r){
			long long mid=(l+r)/2;
			long long cnt=count_element_between_range(x-mid,x+mid,v);
			if(cnt>=k){
				ans=mid;
				r=mid-1;
			}
			else{
				l=mid+1;
			}
		}

		cout<<ans<<endl;
	}

	return 0;
}