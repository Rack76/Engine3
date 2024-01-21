#include "VLUI64.h"
#include <cmath>

void VLUI64::sl()
{
	unsigned long carry = quadwords[0] / pow(2, 63);
	quadwords[0] = quadwords[0] << 1;

	int i = 1;

	if (carry == 0)
		;
	else
		while (carry != 0)
		{
			unsigned long newCarry = quadwords[i] / pow(2, 63);
			quadwords[i] = quadwords[i] << 1;
			quadwords[i] += carry;
			carry = newCarry;
			i++;
		}
}