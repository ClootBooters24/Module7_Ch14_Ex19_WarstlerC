#include <iostream>
#include <fstream>
#include <iomanip>
#define SENTINEL -1
using namespace std;

int main()
{
	ofstream fout;
	fout.open("Introductory19.txt", ios::app);

	double payroll;
	
	while (1)
	{
		cout << "Enter payroll amounts (-1 to exit): " << endl;
		cin >> payroll;
		
		if (payroll == SENTINEL)
			break;

		fout << fixed << setprecision(2) << payroll << endl;
	}

	fout << endl;
	fout.close();

	return 0;
}