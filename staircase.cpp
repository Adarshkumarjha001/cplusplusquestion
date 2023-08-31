#include<bits/stdc++.h>
using namespace std;
int staircaseproblem(int n)
{
	if(n<=1){
		return 1;
	}
	else{
		return staircaseproblem(n-1)+staircaseproblem(n-2);
	}
}
int main(){
	int n;
	cin>>n;
	int p=staircaseproblem(n);
	cout<<p;
	
}
