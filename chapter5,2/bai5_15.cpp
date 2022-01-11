#include<iostream>
using namespace std;
void tinhtoan(){
    int n;
    do{
        cout<<"nhap n>0:"<<endl;
        cin>>n;
        if(n<0){
            cout<<"nhap lai n >0:"<<endl;
            cin>>n;
        }
    }while(n<=0);
        int i = 1;
        int max=1;
        while(i<n){
            if((n%i==0)&&(i%2==1)){
                if(i>max){
                    max=i;
                }
            }
           i++; 
        }    
        cout<<max<<endl;
        }
int main(){
    tinhtoan();
    return 0;
}