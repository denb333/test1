#include<iostream>

using namespace std;
void CandyParcel(int nS, int nB, int amount ){
	int nSmall = nS*2;
    int nBig   = nB*5;
    int number;
    bool check = true;
    for(int i=1; i<=nS;i++){
        number = 2*i + nBig;
        if(number == amount){
            cout << "Required number of small candies = "<<i;
            check = false;
            break;
        }
    }
    if(check) cout << "Cannot be achieved by any possible combinations of candies";
}

int main(){
    int nS;
	int nB;
    int amount;
	cout<<"nS=";cin>>nS;
	cout<<"nB=";cin>>nB;
    cout<<"amount=";cin>>amount;

    CandyParcel(nS, nB, amount);
}
