#ifndef _NUMBER_H
#define _NUMBER_H


namespace Math {
	class Rational {
		private:
			int n;
			int d;
			
		public:
			/** Constructors */
			Rational()
				: n(0), d(1) { }
			
			Rational(int a) 
				: n(a), d(1) { }
			
			Rational(int a, int b)
				: n(a), d(b) { }
			
			/** Class methods */
			void setNumerator(int n);
			void setDenominator(int d);
			
			int getNumerator(int n);
			int getDenominator(int d);
			
			void simplify();
			void print();
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
			/** Constructors */
			Number() = delete;
			Number(int valType, int a, int b, double c);
			
			/** Class methods */
			void print();
	}; 
	
}; // Namespace Math


#endif // _NUMBER_H
