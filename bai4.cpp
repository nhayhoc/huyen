#include <iostream>
using namespace std;
int main(){
   int n,m, A[100][100];

   //enter
   cout<<"Nhap m: "; cin >>m;
   cout<<"Nhap n: ";cin>>n;
   cout << "Nhap lan luot cac phan tu cua ma tran: \n";
   for (int i = 0 ; i < m ; i++ )
      for (int j = 0 ; j < n ; j++ )
         cin >> A[i][j];
         
	//solve
   	cout<<"Cac so le trong ma tran: ";
   	for (int i=0;i<m;i++)
   		for(int j=0;j<n;j++)
   			if (A[i][j] % 2 != 0) 
	         	cout << A[i][j] << " ";

}
