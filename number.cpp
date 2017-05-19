#include "includes\Main.h"


namespace Math {
	/** Class: Rational */
	void setNumerator(int n) {
		
	}
	void setDenominator(int d);

	int getNumerator(int n);
	int getDenominator(int d);
	
	void Rational::simplify() {
		int gcd = getGCD(this->n, this->d);
		
		if (gcd > 1) {
			this->n /= gcd;
			this->d /= gcd;
		}
	}
	
	void Rational::print() {
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
	
	
	/** Class: Number */
	Number::Number(int valType, int a, int b, double c) {
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
	
	void Number::print() {
		if (this->valType == RATIONAL) {
			this->type.rat.print();
		} else if (this->valType == DECIMAL) {
			printf("%f ", this->type.dec);
		} else {
			printf("[Error: %s] Unknown type\n", __func__);
		}
	}
	
}; // namespace Math
