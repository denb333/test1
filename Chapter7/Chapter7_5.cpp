#include<iostream>
using namespace std;
void nhap(int [] , int &);
void avg(int [], int );
int main(){

int arr[100];
int n;
nhap(arr,n);
// cout<<"Total="<<avg(arr,n);
avg(arr,n);
}
void nhap(int mang[],int &n){
    
    cout<<"Enter number Array:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter values ["<<i<<"]:"<<endl;
        cin>>mang[i];
    }
}
void avg(int mang[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1; j<n;j++){
            if(mang[i]>mang[j]){
            temp=mang[i];
            mang[i]=mang[j];
            mang[j]=temp;
            }
        } 
    }
  double total = (mang[0]+mang[n-1])/2;
  cout<<"Total="<<total<<endl;
}