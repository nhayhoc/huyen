#include <iostream>
using namespace std;

int main() {
	int n, i,a[100],tg,j;
	//enter
	cout<<"Nhap so phan tu trong day: "; cin >>n;
	cout<<"Nhap lan luot tung phan tu trong day: \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	//solve 
	for (int i=0;i<n;i++)
    	for(int j=0;j<i;j++)
    	{
            if(a[i]<a[j])
            {
            tg=a[i];
            a[i]=a[j];
            a[j]=tg;
            }
       	}	
    
    //res
	cout<<"\nDay sau khi sap xep: ";
	for(j=0;j<n;j++)
	{
		cout<<a[j] << " ";
	}
	 
 }
