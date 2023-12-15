#include<iostream>
#include<iomanip>
#include<cmath>//For using setw(), setprecision(), ...
using namespace std;

int main(){
    double x,t,y,z,ne;
    int i=1;
	cout << "Enter initial loan: ";
	cin >> x;
	cout << "Enter interest rate per year (%): ";
	cin >> t;
	cout << "Enter amount you can pay per year: ";
	cin >> y;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
    
    for(;;){
	    //use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
    	//you can change input argument of 'setprecision()' to see the effect
    	cout << fixed << setprecision(2); 
    	cout << setw(13) << left << i;
    	cout << setw(13) << left << x;
    	cout << setw(13) << left << x*t/100;
    	cout << setw(13) << left << x+x*t/100;
    	z = min(y,x+x*t/100);
	    cout << setw(13) << left << z;
	    ne=(x+x*t/100)-z;
	    cout << setw(13) << left << ne;
	    cout << "\n";
	    i++;
	    x=ne;
	        if(ne==0){break;}
	  }
	return 0;
}
