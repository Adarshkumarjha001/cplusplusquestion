#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int temp=i;
		for(int j=1;j<=n;j++){
			char ch=64+temp;
			cout<<ch;
			temp++;
			
		}
		cout<<endl;
	}
}
