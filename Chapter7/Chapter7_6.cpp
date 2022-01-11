#include<iostream>
using namespace std;
void nhap(int [] , int &);
void avgnumberchan(int [], int );
void avgnumberle(int [], int );
int main(){
 int arr[100];
 int n;
 nhap(arr, n);
 avgnumberchan(arr,n);
 avgnumberle(arr,n);

}
void nhap(int mang[],int &n){
    
    cout<<"Enter number Array:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter values ["<<i<<"]:"<<endl;
        cin>>mang[i];
    }
}
void avgnumberchan(int mang[],int n){
    int count = 0;
    double avg=0;
 for(int i=0;i<n;i++){
     if(i%2==0){
          avg = avg + mang[i];
         count= count+1;
     }
 }
 double total = avg / count;
 cout<<"Total chan"<<total<<endl;
}
void avgnumberle(int mang[],int n){
    int count = 0;
    double avg=0;
 for(int i=0;i<n;i++){
     if(i%2!=0){
          avg = avg + mang[i];
         count= count+1;
     }
 }
 double total = avg / count;
 cout<<"Total le"<<total<<endl;
}