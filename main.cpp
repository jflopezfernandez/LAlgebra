
#include "includes\Main.h"



int getGCD(int m, int n) {
	int r = m % n;
	
	while (r != 0) {
		m = n;
		n = r;
		
		r = m % n;
	}
	
	return n;
}






int main()
{
	Math::Number n1(RATIONAL,-2,4,1);
	n1.print();
	
	printf("\n\n");
	
	Math::Number n2(DECIMAL,1,1,0.325);
	n2.print();
	
	printf("\n\n");
	
	return EXIT_SUCCESS;
}
