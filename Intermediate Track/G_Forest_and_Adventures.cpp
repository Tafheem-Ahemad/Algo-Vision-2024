/*

Topic : DFS and Binary Exponentiation

Approach :

We will aproach it as a tree with 2 types of edges, red egde and green edge. 

The approach is first we will find the count all the possible sequences of size k, then we would 
find the number of sequences which are not adventurous. On subtracting these two we will get our answer.
The total no. of sequenceses of size k will be n^k. 

Now we will remove all the red edges from the tree, this would cause the tree to split into multiple
components. Now we will find all the not adventurous sequences of size k for each component, by using 
the formula (size of component)^k . We can add this for all the components and then finally we get 
our answer as : total sequences - total not adventureous sequences.

Note: here for calculating power we have to use binary exponentiation.

Time complexity : O(n * log(k))
*/

#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;

//function to calculate n^k using binary exponentiation.
long long biExpo(long long n,long long k) 
{
	n%=mod;
	long long res=1;
	while(k>0)
	{
		if(k%2==1) {
			res=(res*n)%mod;
			k--;
		}else {
			n=(n*n)%mod;
			k/=2;
		}
	}

	return res;
}

//function to count the no. of nodes in a component
long long dfs(int node,vector<int> adj[],vector<bool> &vis)
{
	vis[node]=true;
	long long cnt=1;
	for(auto &it:adj[node])
	{
		if(!vis[it]) cnt+=dfs(it,adj,vis);
	}
	return cnt;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n,k;
	cin>>n>>k;

	vector<int> adj[n+1];
	for(int i=0;i<n-1;i++)
	{
		long long u,v,c;
		cin>>u>>v>>c;
		if(c==0) //ignoring (removing) the red edges.
		{
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
	}

	long long total=biExpo(n,k); //total possible sequences of size k
	long long inValid=0; //to store the total non adv. sequences
	vector<bool> vis(n+1,false);
	for(int node=1;node<=n;node++)
	{
		if(!vis[node])
		{
			long long m=dfs(node,adj,vis);
			long long res=biExpo(m,k);//calculating (size of component)^k
			inValid=(inValid+res)%mod;
		}
	}

	long long ans=(total-inValid+mod)%mod;//calculating final answer
	cout<<ans<<'\n';
}