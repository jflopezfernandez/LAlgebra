#include <cstdio>
#include <cstdlib>
#include <cstdint>

#include <iostream>

typedef std::int32_t INT;


int getGCD(int m, int n) {
	int r = m % n;
	
	while (r != 0) {
		m = n;
		n = r;
		
		r = m % n;
	}
	
	return n;
}

class Rational {
	private:
		INT n;
		INT d;
		
	public:
		Rational()
			: n(0), d(1)
		{ 
		
		}
		Rational(int a) 
			: n(a), d(1)
		{
			
		}
		Rational(int a, int b)
			: n(a), d(b)
		{
			
		}
		
		void simplify() {
			int gcd = getGCD(this->n, this->d);
			
			if (gcd > 1) {
				this->n /= gcd;
				this->d /= gcd;
			}
		}
		
		void print() {
			this->simplify();
			
			if (this->d == 1) {
				std::cout << this->n << " ";
			} else if (this->n == 0) {
				this->d = 1;
				
				std::cout << this->n << " ";
			} else {
				std::cout << this->n << "/" << this->d << " ";
			}
		}
};

union _type {
	Rational rat;
	double dec;
};

enum class valType { RATIONAL, DECIMAL };

class Number {
	private:
		union _type type;
		enum class valType;
		
	public:
		Number() {
			
		}
};




int main()
{
	Rational r1;
	Rational r2(2);
	Rational r3(2,4);
	
	r1.print(); printf("\n");
	r2.print(); printf("\n");
	r3.print(); printf("\n");
	
	return EXIT_SUCCESS;
}