#include<iostream>

using namespace std;
void nhap(int [],int [],int &);
void newarr(int [],int [],int );
int main(){
int n;
int mang1[n];
int mang2[n];
 nhap(mang1,mang2,n);
 newarr(mang1,mang2,n);
 return 0;
}
void nhap(int A[], int B[], int &SIZE){ 
	cout<<"Nhap cac phan tu mang A la: "<<endl;
	cin>>SIZE;
    for(int i=0; i<SIZE; i++){
    	cout<<"Nhap phan tu thu "<<i<<" : ";
    	cin>>A[i];
    }
    cout<<"Nhap cac phan tu mang B la: "<<endl;
    for(int j=0; j<SIZE; j++){
    	cout<<"Nhap phan tu thu "<<j<<" : ";
    	cin>>B[j];
    }
}
void newarr(int arr1[],int arr2[],int n){
    int newarr[n];
    for(int i=0;i<n;i++){
        newarr[i]=arr1[i]*arr2[i];
    }
    for(int i=0;i<n;i++){
        cout<<"New arr:"<<newarr[i]<<" "<<endl;
    }
}
