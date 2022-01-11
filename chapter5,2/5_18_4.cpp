#include<iostream>
using namespace std;
void tinhtong(int n){
		int S;
	
	for (int i=1;i<=n;i++){
		S=S+i*i;
}
		cout<<"Tong = "<<S;
	}
		int main(){
		int n;
			cout<<"Nhap n:= ";
	        cin>>n;
			tinhtong(n);
			
	return 0;
}