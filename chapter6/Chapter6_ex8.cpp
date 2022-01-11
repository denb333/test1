#include<iostream>
#include<string.h>
using namespace std;

void ASC(int x){
    
    string str = to_string(x);
    int s = str.length();
    int tmp,a,n[s],digit=0;
    while(tmp!=0){
        a=x%10;
        n[digit]=a;
        digit+=1;
        x=x/10;
    }
    int tg;
    for(int i=0; i<s; i++){
        for(int j=i+1; j<s; j++){
            if(n[i] > n[j]){
                tg = n[i];
                n[i] = n[j];
                n[j] = tg;        
            }
        }
    }
    cout<<"ASC(x) = ";
    for(int i = 0; i < s; i++){
        cout<<n[i];
    }
    cout<<endl;
    cout<<"DESC(x) = ";
    for(int i=s-1 ; i >=0; i--){
        cout<<n[i];
    }
}

int main(){
    int x;
    cout << "\nNhap x = ";
    cin >> x;
    cout<<"-------------"<<endl;
    ASC(x);
}