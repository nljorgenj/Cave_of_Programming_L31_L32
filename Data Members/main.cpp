#include <iostream>

#include "Cat2.h"

using namespace std;

int main() {

	// Instantiating a Cat2
	Cat2 jim;
	Cat2 bob;

	jim.makehappy();
	bob.makesad();

	// Calling a method/function
	jim.speak();
	bob.speak();

	return 0;
}
