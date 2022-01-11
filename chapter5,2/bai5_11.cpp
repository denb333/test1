#include <iostream>
using namespace std;
int doiso(int n){
    int doiso=0;
    int so;
    while(n != 0){
        so=n%10;
        doiso=(doiso*10)+so;
        n=n/10;
    }
    return doiso;
}
void number(int so){
   switch(so){
			case 0:
				cout<<"old ";break;
			case 1:
				cout<<"one ";break;
			case 2:
				cout<<"two ";break;
		    case 3:
				cout<<"three ";break;
			case 4:
				cout<<"four ";break;
			case 5:
				cout<<"five ";break;
			case 6:
				cout<<"six ";break;
			case 7:
				cout<<"seven ";break;
			case 8:
				cout<<"eight ";break;
		    case 9:
				cout<<"nine ";break;
			default :
				break;
   }
}
void output( int daoso) {
    int so;
    while( daoso != 0){
        so=daoso%10;
        number(so);
        daoso=daoso/10;
    }
}
int main(){
    int n;
    cout<<"nhap so n>0"<<endl;
    cin>>n;
    while(n<=0){
        cout<<"nhap lai cho dung so n>0"<<endl;
         cin>>n;
    }
    int daoso = doiso(n);
    output(daoso);
    return 0;
}