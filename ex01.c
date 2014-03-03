/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

int soma, i;

for(i = 1; i < 1000; i++) {

//Realiza a divisão do I pelo 3, caso o resto seja 0 significa que o mesmo é multiplo, então soma na variável soma o número (I)
if(i % 3 == 0) 
{
	soma = soma + i;
}
else
{
//Caso a divisão pelo 3 não ocorra entrara no else e se caso no else a divisão por 5 resultar em resto 0 realiza a mesma operação de antes.
	if(i % 5 == 0)
	{
	soma = soma + i;	
	}
}

} // Fim For

printf("A soma é: %d\n", soma);

}