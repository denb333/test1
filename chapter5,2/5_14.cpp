#include <iostream>
#include <math.h>
#include<string>
using namespace std;
int test(char c){
    
	cout<<" Ban muon thoat khoi  chuong trinh  ( c or k ) ? "<<endl;
	cin>>c;
    switch (c)
	{
		case 'c': 
		cout<<" Ban da thoat khoi chuong trinh . Vui long chay lai neu muon thuc hien !!"<<endl;
		// exit (0);
		break;
		case 'k' : int main();
		cout<<" Ban hay tiep tuc nhe !!"<<endl;
		break;
    
    }
}
int soNguyenTo()	{
	
	int n;
    cout << "\nNhap vao so ban muon kiem tra = ";
    cin >> n;
    if(n < 2){
        cout << n << " khong phai so nguyen to\n";
        cout<<"Vui long chon lai trong MENU "<<endl;
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        cout << n << " la so nguyen to\n";
         cout<<"Vui long chon lai trong MENU "<<endl;
    }else{
        cout << n << " khong phai so nguyen to\n";}
         cout<<"Vui long chon lai trong MENU "<<endl;
	}
	void Armstrong (){
		 int num,copy_of_num,sum=0,rem;
   cout<<"Nhap vao so ban muon kiem tra: "<<endl;;
   cin>>num;
   copy_of_num = num;
   while (num != 0)
   {
      rem = num % 10;
      sum = sum + (rem*rem*rem);
      num = num / 10;
   }
   if(copy_of_num == sum){
      cout<<copy_of_num<<" la so Armstrong"<<endl;
      cout<<" Vui long chon lai trong MENU"<<endl;}
   else {
      cout<<copy_of_num<<" khong phai là so Armstrong"<<endl;
      cout<<" Vui long chon lai trong MENU"<<endl;}
	}
	void songuyento(){
		int n;
		cout<<"Nhap vao con so ma ban can kiem tra="<<endl;
		cin>>n;
		while(n!=0){
			 cout << n << " khong phai so nguyen to\n";
            cout<<"Vui long chon lai trong MENU "<<endl;
		}
		int count = 0;
		for(int i=2;i<sqrt(n);i++){
			if(n%i==0){
				count++;
			}
		}
		if(count==0){
			cout<<n<<"Day la so nguyen to"<<endl;
			cout<<n<<"Chon lai MENU neu ban co nhu cau\n";

		}else{
			cout<<"Day khong phai la so nguyen to"<<endl;
			cout<<"Chon lai MENU neu ban co nhu cau\n";
		}
	}
int main(){
    char c;
	cout<<"\n\n\t\t=====MENU======";
	cout<<"\n1.Kiem tra so Armstrong";
	cout<<"\n2.Kiem tra so nguyen to";
	cout<<"\n3.Ket thuc";
	cout<<"\n\n\t\t======END======"<<endl;
	cout<<" \nChoose (1,2,3) : ";
    int luachon;
    do{
        cin>>luachon;
        switch(luachon){
            case 1: Armstrong();break;
			case 2: songuyento();break;
			case 3: test(c); break;
        }
    }while(luachon !=1||luachon!=2||luachon!=3);

}