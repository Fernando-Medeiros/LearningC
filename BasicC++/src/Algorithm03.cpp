#include <iostream>

using namespace std;

class Person {
public:
	int Age;

	Person(int age) {
		Age = age;
	}
};

static void Algorithm03()
{
	const int ConstantValue = 0000;

	char Letter = 'F';

	bool IsConnected = false;
	bool HasConnectionString = false;
	
	// Short(16) Int(32) Long(64)
	short Short = 32767;
	int Integer = 2147483647;
	long LongInteger = 9223372036854775806;

	// Float(32) Double(64): 
	float Phi = 2147483647.000f;
	double X = 9223372036854775806.000;
	long double Long = 9223372036854775806.9223372036854775806;

	// signed unsigned
	unsigned int OnlyPositiveInteger = 32;

	// Declare a Class > create a new object (Instance):
	Person PersonX = Person(29);

	// Arithmetic:
	cout << "2 - 2 = " << 2 - 2 << endl;
	cout << "2 + 2 = " << 2 + 2 << endl;
	cout << "2 * 2 = " << 2 * 2 << endl;
	cout << "2 / 2 = " << 2 / 2 << endl;
	cout << "2 mod 2 = " << 2 % 2 << endl;

	// Bitewise:
	cout << "2 & 1 = " << (2 & 1) << endl;
	cout << "2 | 1 = " << (2 | 1) << endl;
	cout << "~true = " << ~true << endl;
	cout << "false ^ true = " << (false ^ true) << endl;

	// Logical > And Or Not:
	cout << "true && true = " << (true && true) << endl;
	cout << "false || true = " << (false || true) << endl;
	cout << "!true = " << !true << endl;

	// Relational:
	cout << "2 == 2 = " << (2 == 2) << endl;
	cout << "2 != 2 = " << (2 != 2) << endl;
	cout << "2 > 2 = " << (2 > 2) << endl;
	cout << "2 < 2 = " << (2 < 2) << endl;
	cout << "2 >= 2 = " << (2 >= 2) << endl;
	cout << "2 <= 2 = " << (2 <= 2) << endl;

	// Pointers: * & ->
	Person* PointerToPerson;
	PointerToPerson = &PersonX;

	Person& ReferenceAccess = PersonX;

	cout << "Pointer access with Person* = " << PointerToPerson << endl;
	cout << "Reference value with &Person = " << &ReferenceAccess << endl;
	cout << "Access member with person pointer -> = " << PointerToPerson -> Age << endl;
}