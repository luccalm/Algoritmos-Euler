/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

int soma, i;

for(i = 1; i < 1000; i++) {

if(i % 3 == 0) 
{
	soma = soma + i;
}
else
{
	if(i % 5 == 0)
	{
	soma = soma + i;	
	}
}

} // Fim For

printf("A soma é: %d\n", soma);

}