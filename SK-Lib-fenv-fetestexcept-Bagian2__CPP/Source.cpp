/*	Contoh Program Dalam Bahasa C++ 
	Source by Programiz
	Modifed for Learn by Rizky Khapidsyah
	Compiler : MVC (Microsoft)
*/

#include <iostream>
#include <cmath>
#include <cfenv>
#include <conio.h>

#pragma fenv_access (on)

using namespace std;

void print_exceptions() {
	cout << "Raised exceptions : ";

	if (fetestexcept(FE_ALL_EXCEPT)) {
		if (fetestexcept(FE_DIVBYZERO)) {
			cout << "FE_DIVBYZERO ";
		}
			
		if (fetestexcept(FE_INEXACT)) {
			cout << "FE_INEXACT ";
		}
			
		if (fetestexcept(FE_INVALID)) {
			cout << "FE_INVALID ";
		}
			
		if (fetestexcept(FE_OVERFLOW)) {
			cout << "FE_OVERFLOW ";
		}
			
		if (fetestexcept(FE_UNDERFLOW)) {
			cout << "FE_UNDERFLOW ";
		}
	} else {
		cout << "None";
	}
		
	cout << endl;
}

int main(void) {
	print_exceptions();

	feraiseexcept(FE_INVALID | FE_DIVBYZERO);
	print_exceptions();

	feclearexcept(FE_ALL_EXCEPT);
	print_exceptions();

	_getch();
	return 0;
}