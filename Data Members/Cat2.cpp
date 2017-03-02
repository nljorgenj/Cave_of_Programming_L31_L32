#include <iostream>
#include "Cat2.h"

using namespace std;

Cat2::Cat2()
{
	happy = true;
}


Cat2::~Cat2()
{
}


void Cat2::speak() {
	if (happy == true) {
		cout << "Meauwwww!!" << endl;
	}
	else{
		cout << "sssssss!!" << endl;
	}
}

void Cat2::makehappy() {
	happy = true;
}

void Cat2::makesad() {
	happy = false;

}
