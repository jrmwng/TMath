#include <stdio.h>
#include "tmath.h"

/*
Demonstration of the TaylorMath (TMath) math function collection.
*/
int main() {
	printf("%.128f \n", TMath::arcsec(2));
	return 0;
}