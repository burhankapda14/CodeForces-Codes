#include <iostream>
#include <stdio.h>
using namespace std;

#define REP(i,n) for(int i=0; i<n; i++)
int main(){
	int n;
	cin>>n;
	if(n<4){
		cout<<"-1";
		return 0;
	}
	int numSeven=n/7;
	int rem=n%7;
	int numFour=rem/4;
	int toBecomeFour=rem%4;
	if(toBecomeFour!=0){
		if(numSeven>=toBecomeFour){
			numFour+=((7*toBecomeFour)+toBecomeFour)/4;
			numSeven-=toBecomeFour;
		}
		else{
			cout<<"-1";
			return 0;
		}
	}
	REP(i,numFour)
		cout<<"4";
	REP(i,numSeven)
		cout<<"7";
}