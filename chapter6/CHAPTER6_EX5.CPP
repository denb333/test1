#include<iostream>
#include<math.h>
using namespace std;
void daoham(int x,int y){
    int total=y*pow(x,y-1);
cout<<total<<" ";
}
int main(){
    int x,y;
    cout<<"nhap x=";
    cin>>x;
    cout<<"nhap y=";
    cin>>y;
    daoham(x,y);
}