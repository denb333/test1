#include<iostream>
using namespace std;
void nhap(int [] , int &);
void show(int [], int);
int main(){
int arr[100];
int n;
nhap(arr,n);

show(arr,n);
}
void nhap(int mang[],int &n){
    
    cout<<"Enter number Array:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter values ["<<i<<"]:"<<endl;
        cin>>mang[i];
    }
}
void show(int mang[], int n){
    cout<<"dup number:";
     for(int i=0;i<n-1;i++){
        for(int j=i+1; j<n;j++){
            if(mang[i]==mang[j]){
           cout<<mang[i]<<" ";
            }
        } 
}
}