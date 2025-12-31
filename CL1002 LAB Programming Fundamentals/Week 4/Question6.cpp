// QUESTION 3
# include <iostream>
using namespace std;
# include <iomanip>
int main(){
	
	double pi = 3.14159;
	cout << "Multiples of Pi:" << endl;
	cout << "n" << setw(10) << "n * pi" << endl;
	cout << 1 << fixed << setprecision(4) << setw(10) << pi << endl;
	cout << 2 << setprecision(4) << setw(10) << pi*2 << endl;
	cout << 3 << setprecision(4) << setw(10) << pi*3 << endl;
	cout << 4 << setprecision(4) << setw(10) << pi*4 << endl;
	cout << 5 << setprecision(4) << setw(10) << pi*5 << endl;
	cout << 6 << setprecision(4) << setw(10) << pi*6 << endl;		

return 0;
}
