
#include "includes\Main.hpp"




class Number {
	private:
		int numerator;
		int denominator;
		
	public:
		Number() = delete;
		Number(int a, int b) : numerator(a), denominator(b) { }
		
		constexpr int getNumerator() const { return numerator; }
		constexpr int getDenominator() const { return denominator; }
		
		void setNumerator(int n) { numerator = n; }
		void setDenominator(int n) { denominator = n; }
		
		void simplify() { 
			int gcd = getGCD(numerator,denominator); 
			
			if (gcd > 1) { 
				numerator /= gcd;
				denominator /= gcd;
			}
		}
};


void printNum(Number *n);


template <typename T>
void print(T t) {
	std::cout << t << std::endl;
}


int main()
{
	initializeProgram();
	
	for (int i = 0; i < 10; ++i) {
		if (i % 2 == 0) {
			int x = i + 1;
			print(x);
		} else {
			double y = (double) i + 1.0;
			print(y);
		}
	}
	
	return EXIT_SUCCESS;
}


void printNum(Number *n) {
	if (n->getDenominator() == 0) {
		printf("   NaN ");
	} else {
		n->simplify();
		
		if (n->getDenominator() == 1) {
			printf("%5i ", n->getNumerator());
		} else {
			printf("%2i/%2i ", n->getNumerator(), n->getDenominator());
		}
	}
}