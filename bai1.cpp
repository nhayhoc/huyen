#include<iostream>
 
using namespace std;
 
main()
{
   int m, n, c, d, A[2][3], B[2][3], sum[2][3];
   m=2;
   n=3;
   
   //enter
   cout << "Nhap lan luot cac phan tu cua ma tran A: \n";
   for (  c = 0 ; c < m ; c++ )
      for ( d = 0 ; d < n ; d++ )
         cin >> A[c][d];
 
 
 
   cout << "Nhap lan luot cac phan tu cua ma tran B: \n";
   for ( c = 0 ; c < m ;c++ )
      for ( d = 0 ; d < n ; d++ )
            cin >> B[c][d];
 
 
 	//solve
   for ( c = 0 ; c < m ; c++ )
      for ( d = 0 ; d < n ; d++ )
         sum[c][d] = A[c][d] + B[c][d];
 
 	//res
   cout << "Tong hai ma tran A va B:\n";
   for ( c = 0 ; c < m ; c++ )
   {
      for ( d = 0 ; d < n ; d++ )
         cout << sum[c][d] << "\t";
 
      cout << endl;
   }
 
   return 0;
}
