#include <iostream>
#include <cmath>
using namespace std;

void task1(); // task1
void task2(); // task2
void task3(); // task3
int factorial(int factor, int i); // factorial calculation
// start
int main() // menu
{
    int task_num; // diclaration integer
    do {
        cout << " Enter task number (0 - exit): ";
        cin >> task_num; // input integer
        if (!cin) {
            cout << " Ups!" << endl; continue; // error notification
        }
        switch (task_num) 
        {
            case 1 : task1(); break; // task1
            case 2 : task2(); break; // task2
            case 3 : task3(); break; // task3
            case 0 : cout << " Bye!" << endl; break; // exit from the program
            default : cout << " Wrong task number!" << endl; 
            // output for incorrect numbers
        };
    } while (task_num != 0); // end the program
    return 0;
}
// begin
void task1 () // geom35
{
    cout << " geom35 " << endl; // task notification
    float x, y, r, xc, yc; // declaration integers
    bool ar1, ar2;
    int n, count = 0;
    cout << " Number of n: ";
    cin >> n; // input number of attempts 
    
    cout << " Enter the radius: ";
    cin >> r; // input number of radius
    for (int i = 1; i <= n; i++) 
	{

	if (r > 0) // data is correct
	{
		cout << " Enter x: ";
		cin >> x; // input x
		cout << " Enter y: ";
		cin >> y; // input y
        
        xc = x - r / sqrt(2); // intermediate data
        yc = y - r / sqrt(2);
        ar1 = x < 0 && pow(xc, 2) + pow(yc, 2) < pow(r, 2); // calculation for first figure
		ar2 = x > y-r*sqrt(2) && y < 0 && x < 0 && y > -1*r*sqrt(2) && x < y && y > -x-r*sqrt (2);
        // calculation for second figure
	if (ar1 || ar2) { // the point falls into area
		count++; // increasing the number of correct attempts
	}
	else {
		cout << " Wrong!" << endl; // the point does not fall into the area
	}
	cout << " The number of successful attempts  " << count << " from " << n << endl;
	} // output
    else {
	    cout << " Wrong radius! " << endl; //error notification
	}
	}
} //end

void task2 () // range6
{ // begin
    cout << " range6 " << endl;

	int i = 1, n; // diclaration integers
	double x, solving;
    cout << " Enter x: ";
	cin >> x; // input x
    if ( 0.5 > x || x > 2){ 
       cout << " Wrong x! " << endl;
    } // error notification 
    else // data is correct
    {
       cout << " Limit n: ";
	   cin >> n; // input n
	   long double sum = 0;	
	   cout.precision(10); // no more than 10 digits after the decimal point
	   if (!cin || n < 0)
	   {
		  cout << " Wrong integer!" << endl;
	   } // error notification
	   else 
	   {
		  for (i; i <= n; i++)
		  { // calculation
		    int count = 0;
            long double solving = (log(pow(x,i-1)) / pow(-1,i)/x);
			sum += solving;
			solving = 0;

			count = i % 3;

			if (count == 2) {
				cout << " Sum of range: " << sum << endl;
			} // output results
		  }
	   }
	}
} // end
    
void task3 () // range14
{ // begin
    cout << " range14 " << endl;
    int n = 1, i; // diclaration 
	double numer, denom, x, g = 1E+6;
    cout << " Enter x: ";
	cin >> x; // input x
	long double sum = 0;

	do
	{
		n++;
			int factor = factorial(factor,i); // factorial
			int count = 0;
            long double numer = pow(x,2*n) + pow (n,x); // calculation numerator
			long double denom = sqrt(factorial(factor,i)); //  calculation denominator
            // calculation 
			long double solving = numer / denom;
            sum += solving;
			solving = 0;
            count = n % 3;
            if (count == 2) {
				cout << " Sum of range: " << sum << endl;
				// output results
			}
	} while (sum < g);
} //end

int factorial(int factor, int i) // factorial calculation 
{ // begin
    int cul = 1;
    for(int i = 0; i < factor; i++)
    {
        cul *= i;
        }
return cul;
} // end
// finish
