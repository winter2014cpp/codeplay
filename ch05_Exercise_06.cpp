// ch05_Exercise 06.cpp -- Two-dimensional array to store input.
#include <iostream>
int main()
{
	using namespace std;
	int** monthlySales;					// pointer to pointers to an int
	int years = 3;
	int months = 3;						// 3 used for testing, can change to 12. 
	monthlySales = new int*[years];		// monthlySales now a pointer to an array of 'years' pointers

	for (int i = 0; i < years; i++)
	{
		monthlySales[i] = new int[months];		// the ith array is initialized
		for (int j = 0; j < months; j++)
		{
			cout << "Enter monthly sales in year " << (i + 1) << " and month " << (j + 1) << ": ";
			cin >> monthlySales[i][j];
		}
	}

	// print monthly sales
	int sumMonth;
	int sumYears = 0;
	cout << "The monthly sales you enterd are:\n\n";
	for (int i = 0; i < years; i++)
	{
		sumMonth = 0;
		for (int j = 0; j < months; j++)
		{
			cout << monthlySales[i][j] << "\t";		// tab between each element
		sumMonth += monthlySales[i][j];
		}
		cout << "Monthly sum: " << sumMonth;
		sumYears += sumMonth;
		cout << "\n\n";
	}
		cout << "\t\t\t" << "Total Sum: " << sumYears;
	

	// free up memory taken by releasing each vector
	for (int i = 0; i < years; i++)
		delete[] monthlySales[i];

	cin.get();
	cin.get();
	return 0;
}
