#include <iostream>
#include "bigint.h"
#include <iostream>


using std::cout;
using std::cin;
using std::endl;
using std::cerr;


int main(){
	
	long a = -124124;
	bigint A(a);
	A.print();
	
	unsigned long b = 2444;
	bigint B(b);
	B.print();
	
	bigint C("54321234567876543234567876543212345676543213456787654321234567876543212345678765432345612312312312412412412312323432512345654321345676543234567865432345676543212345676543212345678765432123456765432123456787654323456787654321234567654321345678765432123456787654321234567876543234565432123456787654323456787654321234567654321345678765432123456787654321234567876543234561231231231241241241231232343251234565432134567654323456786543234567654321234567654321234567876543212345676543212345678765432345678765432123456765432134567876543212345678765432123456787654323456");
	C.print();
	
	cout << "\n~~~GCD~~~" << endl;
	
	bigint::gcd(A, B).print();
	bigint::gcd(A, C).print();
	bigint::gcd(B, C).print();
	
	cout << "\n~~~ERATOSTHENES" << endl;
	
	unsigned long size = 1000;
	
	bigint* simple = new bigint[size];
	
	unsigned long task = bigint::Eratosthenes(simple, size);
	
	cout << bigint::Eratosthenes(simple, size) << endl;
	
	for(unsigned long i = 0; i < task; ++i)
	{
		simple[i].print();
	}
	
	cout << "\n~~~SQRT~~~" << endl;
	
	
	bigint::sqrt(B).print();
	bigint::sqrt(C).print();
	bigint::sqrt(A).print();
}