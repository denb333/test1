#include<iostream>

using namespace std;
int main(){
	int a[100];
	int i, j, n, k;
	cout<<"nhap so phan tu cua mang: ";
	cin>>n;
	for (i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j <n; j++)
		{
			if (a[i] == a[j])
			{
				for (k = j; k < n; k++) 
				{
					a[k] = a[k + 1];
				
                    
				}
					n--;
					j--;
			}
		}
	}
	cout<<"\nmang sau khi xoa la:\n";
	for (i = 0; i < n; i++) 
	{
		cout<<a[i];
	}
	return 0;
}