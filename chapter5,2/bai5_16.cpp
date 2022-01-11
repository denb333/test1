#include <iostream>
using namespace std;
void doiso(int n){
    int doiso=0;
    int so;
    while(n != 0){
        so=n%10;
       if(so%2==1){
          int min=so;
         
       }
        n=n/10;
    }
   
}
int main(){
     int n ;
  cout<<"nhap so n>0:"<<endl;
  cin>>n;
  doiso(n);
  return 0;
}