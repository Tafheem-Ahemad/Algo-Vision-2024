
/*

Topic : STL
Approach : 
	--> Create a map to store the index of the element.
	--> Traverse the array and check if the element is already present in the map.
	--> If the element is present then calculate the distance between the current index and the index of the element in the map.
	--> If the distance is less than the minimum distance then update the minimum distance and the answer.
	--> Print the answer.
	
	Time complexity : O(n)

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

		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}

		map<int,int> mp;
		int mn_dis=1e8;
		int ans=-1;

		for(int i=0;i<n;i++){
			if(mp.count(v[i])){
				if(i-mp[v[i]]<mn_dis){
					mn_dis=i-mp[v[i]];
					ans=v[i];
				}
			}else{
				mp[v[i]]=i;
			}
		}

		cout<<ans<<endl;
	}

	return 0;
}