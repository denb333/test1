#include<iostream>
using namespace std;

	void ketqua(int n){
	if (n==0) {
		cout<<"Khong phai so tu nhien"; 
	}
	for (int i=n;i>=1;i--){
		cout<<" "<<i<<endl; 
	} }
	int main(){
	int n;
	cout<<"Nhap n:= ";
	cin>>n;	
	ketqua(n);
	return 0;
}
