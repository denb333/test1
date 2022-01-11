#include<iostream>
using namespace std;
void tinhtong(int n){
int t=1;
	for (int i=1;i<=n;i++){
	
		   t=t*i; }
		cout<<t; }
int main(){
	int n;
	cout<<"Nhap n:= ";
	cin>>n;
tinhtong(n);
	return 0;
}
