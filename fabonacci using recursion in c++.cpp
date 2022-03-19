#include <iostream>
using namespace std ;
int fabonacci(int );
 main()
 {
 	int n ,i   ; 
 	cout <<"enter then no of elements  :==> " <<endl ;
 	cin>> n  ;
 	cout << "fabonacci series is \n\n"<< endl ;
 	for (i =0;i=n;i++)
 	{
 	cout << fabonacci(i)<<endl ;
	}
 }
 int fabonacci(int i )
 {
 	if ( i==0 )
 	{return 0;
	 }
	 else if (i==1)
	 {
	 	return 1;
	 }
	 else 
	 { return (fabonacci(i-1)+fabonacci(i-2));
	 }
 }
