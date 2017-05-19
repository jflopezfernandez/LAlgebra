#include <cstdio>
#include <cstdlib>
#include <cstdint>

#include <iostream>

const int RATIONAL = 0;
const int DECIMAL = 1;


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
		int n;
		int d;
		
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

class Number {
	private:
		union _type type;
		int valType;
		
	public:
		Number() = delete;
		Number(int valType, int a, int b, double c) {
			this->valType = valType;
			
			if (this->valType == RATIONAL) {
				this->type.rat.n = a;
				this->type.rat.d = b;
			} else if (this->valType == DECIMAL) {
				this->type.dec = c;
			} else {
				printf("[Error: %s] Unknown type\n", __func__);
			}
		}
		
		print() {
			if (this->valType == RATIONAL) {
				this->type.rat.print();
			} else if (this->valType == DECIMAL) {
				printf("%f ", this->type.dec);
			} else {
				printf("[Error: %s] Unknown type\n", __func__);
			}
		}
};




int main()
{
	Number n1(RATIONAL,-2,4,1);
	n1.print();
	
	printf("\n\n");
	
	Number n2(DECIMAL,1,1,0.325);
	n2.print();
	
	printf("\n\n");
	
	return EXIT_SUCCESS;
}