
<<<<<<< HEAD
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
=======
#include "includes\Main.h"
>>>>>>> 721252cd6edced3a4d827f61db50d5e1d342da5f


int main()
{
<<<<<<< HEAD
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
=======
	Math::Number n1(RATIONAL,-2,4,1);
	n1.print();
	
	printf("\n\n");
	
	Math::Number n2(DECIMAL,1,1,0.325);
	n2.print();
	
	printf("\n\n");
	
	return EXIT_SUCCESS;
}
>>>>>>> 721252cd6edced3a4d827f61db50d5e1d342da5f
