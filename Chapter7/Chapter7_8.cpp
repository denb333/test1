#include<iostream>
using namespace std;
void nhapmang(int [],int &);
void chenmang(int [],int );
int main(){
 int arr[100];
 int n;
 nhapmang(arr, n);
 chenmang(arr, n);
}
void nhapmang(int mang[],int &n){
    cout<<"Enter number phan tu="<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter values mang["<<i<<"]="<<endl;
        cin>>mang[i];
    }
}
void chenmang(int mang[],int n){
    int index, value;
    cout<<"Nhap vi tri muon chen ()="<<endl;
    cin>>index;
    cout<<"Nhap values vitri do="<<endl;
    cin>>value;
    for(int i=n-1;i>=index-1;i--){
        mang[i+1]=mang[i];
}
    mang[index-1]=value;
    cout<<"Mang sau khi chen ";
	for(int i=0; i<=n; i++){
		cout<<mang[i]<<" ";
	}
}