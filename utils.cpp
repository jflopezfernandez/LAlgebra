<<<<<<< HEAD

#include "includes\Main.hpp"



int getGCD(int m, int n) {
	int r = m % n;
	
	while (r != 0) {
		m = n;
		n = r;
		
		r = m % n;
	}
	
	return n;
}


void clearScreen() {
	system("cls");
}


void printLines(int n) {
	printf("\n");
	
	for (int i = 0; i < n; ++i) {
		printf("\n");
	}
}


void initializeProgram() {
	clearScreen();
	printLines(2);
}
=======
#include "includes\Main.h"


namespace Math {
	int getGCD(int m, int n) {
		int r = m % n;
		
		while (r != 0) {
			m = n;
			n = r; 
			
			r = m % n;
		}
		
		return n;
	}
	
	
	/** Program initialization */
	void clearScreen();
	void printCompilerInfo();
	void printStandardVersion();
	void printLines(int n);

	void initializeProgram();
	
}; // Namespace Math
>>>>>>> 721252cd6edced3a4d827f61db50d5e1d342da5f
