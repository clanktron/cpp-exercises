// Clayton
// MSJC ID: 0558597
// testing of hashnames class (main)
#include <iostream>
#include "HashNames.h"

int main() {

	HashNames ex("names.txt");

	for (int i = 0; i <= 52; i++){
		ex.printnames(i);
	}
	return 0;
}