#include <iostream> 
using namespace std;
void task1()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < i + 2; k++) {
			cout << k;
		}
		cout << "\n";
	}
}
unsigned long long factorial(int m) {
	unsigned long long fact = 1;
	if (m > 0) {
		for (int i = 1; i <= m; i++) {
			fact *= i;
		}
	}
	else {
		fact = 1;
	}
	return fact;
}
void task2() //Up to 62
{
	int n = 1;
	unsigned long long c = 1;
	cin >> n;
	for (int k = 0; k <= n; k++) {
		cout << c << " ";
		c *= (n - k);
		c /= (k + 1);
	}
}
void task3()
{
	double number, summa, counter = 0;
	cin >> number;
	summa = number;
	while (number!=0) {
		cin >> number;
		summa += double(number);
		counter++;
	}
	cout << summa / counter;

}
int main()
{
	int choice = 0;
	while (true)
	{
		cout << "\nWhat do you want to do? \n";
		cout << "1. Triangle of n \n";
		cout << "2. Binomal odds \n";
		cout << "3. Arithmetic mean of numbers\n";
		cout << "4. Exit \n";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			task1();
			break;
		}
		case 2:
		{
			std::cout << sizeof(long long) << std::endl;
			task2();
			break;
		}
		case 3:
		{
			cout << "Endpoint is ctrl+d \n";
			task3();
			break;
		}
		default:
		{
			return 0;
		}
		}
	}
}
