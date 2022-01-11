#include <iostream>
#include <string.h>
using namespace std;
void check(int n){
    int count ;
    string s= "", s1;
    string s2 = to_string(n);
    int temp = s2.length();
    for(int i=2 ; i<= n;i++){
        int count = 0;
        while(n%i == 0){
            ++count;
            n=n/i;
        }
        if(count){
            s1 = to_string(i);
            s+=s1;
        }
    }
    int tmp = s.length();
    if(tmp==temp){
       cout << "Equidigital";
    }else if ((temp > tmp)){
        cout << "Frugal";
    } else if ((temp < tmp)) {
         cout << "Wasteful";
    }

}
int main() {
    int number;
    cout<<"enter number="<<endl;
    cin>>number;
    check(number);
    return 0;

}