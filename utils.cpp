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
