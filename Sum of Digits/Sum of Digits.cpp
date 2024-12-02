#include <iostream>
#include <string>
using namespace std;

//Solution #6 Sum Of Digits 
//Course #5

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
int PrintSumDigits(int Number)
{
	int Remainder = 0;
	int sum = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		sum += Remainder;
	}
	return sum;
}
int main()
{
	cout << "Sum of Digits is = " << PrintSumDigits(ReadPositiveNumber("Please enter a positivenumber ? ")) << endl;
		return 0;
}
