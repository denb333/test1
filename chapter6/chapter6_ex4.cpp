#include<iostream>
using namespace std;
int sum(int n){
    int s=0;
    while(n != 0){
        int so = n%10;
        n=n/10;
       s+=so;
    }
       return s;
}
   void max(int n,int m){
	int max=0;
	int soMax=0;
	for(int i=m;i>=n;i--){
		if(sum(i)>max){
			max=sum(i);
			soMax=i;
		}
	}
	cout<<soMax;
}
    int main() {
        int n,m;
        cout<<"nhap n="<<endl;
        cin>>n;
        cout<<"nhap m="<<endl;
        cin>>m;
       if(n>m){
           cout<<"false";
       } else{
        max(n,m);
       }
    }