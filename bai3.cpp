#include <iostream>
using namespace std;
int main(){
   int n,m, A[100][100], largest, second;

   //enter
   cout<<"Nhap m: "; cin >>m;
   cout<<"Nhap n: ";cin>>n;
   cout << "Nhap lan luot cac phan tu cua ma tran: \n";
   for (int i = 0 ; i < m ; i++ )
      for (int j = 0 ; j < n ; j++ )
         cin >> A[i][j];
         
	//solve
    if(A[0][0]<A[0][1]){ 
      largest =A[0][1];
      second = A[0][0];
    }
   	else{ 
      largest = A[0][0];
      second = A[0][1];
   	}
   	
   	for (int i=0;i<m;i++)
   		for(int j=0;j<n;j++){
   			if (A[i][j] > largest) {
	         	second = largest;
	         	largest = A[i][j];
	      	}
	      	else if (A[i][j] > second && A[i][j] != largest) {
	         	second = A[i][j];
      		}
	   	}

	//res
   cout<<"Phan tu lon thu hai trong ma tran: "<<second;
   return 0;
}
