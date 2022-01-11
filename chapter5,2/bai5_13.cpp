#include<iostream>
using namespace std;
int main(){
	int n;
	int m;
	cout<<"nhap n:";cin>>n;
	cout<<"nhap m:";cin>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<"*";
		} 
		cout<<endl;
	}
}