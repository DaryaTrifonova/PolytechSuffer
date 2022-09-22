#include <iostream>
#include <string>
#include <bitset>
using std::cout;
using std::cin;
using namespace std;
int main()
{
	cout << "1.Trifonova Darya Andreevna, 221-332" << "\n";

	cout << "size int = " << sizeof(int) << " min int = " << int(0b10000000000000000000000000000000) << " max int = " << int(0b01111111111111111111111111111111) << "\n";
	cout << "size unsigned int = " << sizeof(unsigned int) << " min unsigned int = " << unsigned int(0b00000000000000000000000000000000) << " max unsigned int = " << unsigned int(0b11111111111111111111111111111111) << "\n";
	cout << "size short = " << sizeof(short) << " min short = " << short(0b1000000000000000) << " max short = " << short(0b0111111111111111) << "\n";
	cout << "size unsigned short = " << sizeof(unsigned short) << " min unsigned short = " << unsigned short(0b0000000000000000) << " max unsigned short = " << unsigned short(0b1111111111111111) << "\n";
	cout << "size long = " << sizeof(long) << " min long = " << long(0b10000000000000000000000000000000) << " max long = " << long(0b01111111111111111111111111111111) << "\n";
	cout << "size long long = " << sizeof(long long) << " min long long = " << long long(0b1000000000000000000000000000000000000000000000000000000000000000) << " max long long = " << long long(0b0111111111111111111111111111111111111111111111111111111111111111) << "\n";
	cout << "size double = " << sizeof(double) << " min double = " << (-1)* double(0b1000000000000000000000000000000000000000000000000000000000000000) << " max double = " << double(0b0111111111111111111111111111111111111111111111111111111111111111) << "\n";
	cout << "size char = " << sizeof(char) << " min char = " << (-1)* int(0b10000000) << " max char = " << int(0b01111111) << "\n";
	cout << "size bool = " << sizeof(bool) << " min bool = " << bool(0b00000000) << " max bool = " << bool(0b11111111) << "\n";
	
	

	int num1;
	cout << "3. Print your number:";
	cin >> num1;
	int num2 = num1;
	cout << "bin num1 = " << std::bitset<16>(num1) << "\n";
	cout << "hex num1 = " << hex << num2 << dec << endl;
	cout << bool(num2) << "\n";
	cout <<  double(num2) << "\n";
	cout <<  char(num2) << "\n";

	cout << "4. Print a and b:";
	int a;
	int b;
	double ans;
	cin >> a;
	cin >> b;
	cout << int(a) << "*X = " << int(b) << "\n";
	cout << "X = " << int(b) << "/" << int(a) << "\n";
	cout << "X = " << double(b) / int(a) << "\n";
	//ans = double(b) \ int(a);
	cout << "Answer: " << double(b) / int(a) << "\n";

	cout << "5. Coordinates of the ends of the segment" << "\n";
	int x;
	int y;
	cin >> x;
	cin >> y;
	cout << "Center of the segment: " << double((int(x) + int(y))) / 2;
	
}
