#include <iostream>
using namespace std ;
 main()
 {
 double gm      ;
 int  pollutant,miles  ;
 
 cout<<"(1) Carbon monoxide \n(2) Hydrocarbons\n (3) Nitrgen oxides  \n (4) Nonmethane hydrocarbons"<<endl  ;
 cin>>pollutant;
 cout <<"enter grams per miles"<<endl;
 cin>>gm;
 cout<<  "enter odometer reading"  <<endl;
 cin>>miles;
 
 if (pollutant==1)
 			{
 				 if ( 	miles<=50000    && gm<=3.4)
 				
 				{cout<< " emission level does not exeed permitted level of 3.4"<<endl;
 				
				 }
				 else if  (miles<=50000 && gm>3.4)
				 {cout << "emission level exceeds  permitted level of 3.4 grams per mile"<<endl;}
			 
			 else if  (miles>50000 && gm<=4.2)
				 {cout <<" emission level exceeds  permitted level of 4.2 grams per mile"<<endl;}
			 else if  (miles>50000 && gm>3.4)
				 {cout << "emission level exceeds  permitted level of 3.4 grams per mile"<<endl;}
			 
			 }
			 if (pollutant==2)
 			{
 			if ( 	miles<=50000    && gm<=0.31)
 				
 				{cout<< " emission level does not exeed permitted level of 0.31 "<<endl;
 				
				 }
				 else if  (miles<=50000 && gm>0.31)
				 {cout << "emission level exceeds  permitted level of 0.31 grams per mile"<<endl;}
			 
			 else if  (miles>50000 && gm<=0.39)
				 {cout << "emission level does not exceeds  permitted level of 0.39 grams per mile"<<endl;}
			 else if  (miles>50000 && gm>0.39)
				 {cout << "emission level exceeds  permitted level of 0.39 grams per mile"<<endl;}
			}
			if (pollutant==3)
 			{
 				 if ( 	miles<=50000    && gm<=0.4)
 				
 				{cout<< " emission level does not exeed permitted level of 0.4 "<<endl;
 				
				 }
				 else if  (miles<=50000 && gm>0.4)
				 {cout << "emission level exceeds  permitted level of 0.4 grams per mile"<<endl;}
			 
			 else if  (miles>50000 && gm<=0.5)
				 {cout << "emission level does not exceeds  permitted level of 0.5 grams per mile"<<endl;}
			 else if  (miles>50000 && gm>0.5)
				 {cout << "emission level exceeds  permitted level of 0..5 grams per mile"<<endl;}
			}
			if (pollutant==4)
 			{
 				 if ( 	miles<=50000    && gm<=0.25)
 				
 				{cout<< " emission level does not exeed permitted level of 0.25 "<<endl;
 				
				 }
				 else if  (miles<=50000 && gm>0.25)
				 {cout << "emission level exceeds  permitted level of 0.25 grams per mile"<<endl;}
			 
			 else if  (miles>50000 && gm<=0.31)
				 {cout << "emission level does not exceeds  permitted level of 0.31 grams per mile"<<endl;}
			 else if  (miles>50000 && gm>0.31)
				 {cout << "emission level exceeds  permitted level of 0.31 grams per mile"<<endl;
				 }
			}
		}
			
 
 
