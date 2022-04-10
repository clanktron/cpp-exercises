#include <iostream>
#include "HashNames.h"

int main() {

	HashNames ex("names.txt");

	for (int i = 1; i <= 53; i++) {
		ex.printnames(i);
	}
	return 0;
}