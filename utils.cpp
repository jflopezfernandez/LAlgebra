
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