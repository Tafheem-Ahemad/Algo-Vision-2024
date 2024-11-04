
/*

Topic : Game Theory , Constructive Algorithm
Approach : 


	This question has multiple solutions , one of the solution is as follows:
		-->	Given that array length is even , so both player will get equal number of chances.
		--> Also Total sum of the array is odd , so one of the player will get more more coins than the other player.So the player who get more coins will win the game.
		--> So who will start the game (Ra. one)  is important , because he will get the first chance to pick the coin. so according that he will take the initial advantages.
		--> So he(Ra. one) wins the game. and (G. one) will lose the game.

	Time complexity : O(1) per test case


	Also Dynamic Programming can be used to solve this problem.
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

		cout<<"false"<<endl;
	}


	return 0;
}