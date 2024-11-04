/*

Topic:- Two Pointer Technique

Then we use Two Pointer , one on first array , other in second array. we will keep track of sum of elements of both array. 

if sum of both array is equal then we will merge till this and start a new partition. and create  new partision

if sum of first array is less than sum of second array then
if (i==n) then print -1 and return , otherrwise we will add element to sum of first array and move first pointer to right 
 

if sum of first array is greater than sum of second array
if(j==m) then print -1 and return , then we will add element to sum of second array and move second pointer to right.

	Time complexity : O(n+m)
*/


#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main(){
	fast();

	long long n;
	cin>>n;

	vector<long long> a(n);
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}

	long long m;
	cin>>m;

	vector<long long> b(m);
	for(long long i=0;i<m;i++){
		cin>>b[i];
	}


	long long sum1=0;
	long long sum2=0;
	int i=0,j=0;
	int count=0;
	while(i<n || j<m){
		if(sum1==sum2){
			sum1=a[i];
			sum2=b[j];
			i++;
			j++;
			count++;
		}else if(sum1<sum2){
			if(i==n){
				cout<<-1<<endl;
				return 0;
			}
			sum1+=a[i];
			i++;
		}else{
			if(j==m){
				cout<<-1<<endl;
				return 0;
			}
			sum2+=b[j];
			j++;
		}
	}
	
	if(sum1!=sum2){
		cout<<-1<<endl;
		return 0;
	}

	cout<<count<<endl;

	return 0;
}