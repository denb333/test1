#include <iostream>
using namespace std;
int main()
{
int k,S=0;
int n;
do{
cout<<"nhap so nguyen duong n=";
cin>>n;
if(n<=0)
cout<<"nhap lai\n";
}while(n<0);
for(k=1;S+k<=n;k++)
{

S=S+k;
}
cout<<"ket qua k="<<k-1;
}