#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int i,n, A[100];
    cout << "Nhap so phan tu: "; 
	cin>>n;
    
    for (  i = 0 ; i < n ; i++ ){
    	cout << "A[" << i << "]=";
    	cin >> A[i];
	}
    cout << "Day so nguoc vao voi day nhap vao: \n";
	for (  i = n-1 ; i >=0 ; i-- )
    	cout << A[i] << "  ";
} 
