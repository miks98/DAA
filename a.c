/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, k, i;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	printf("Factors of %d are: ", num);

	for (i = 1; i < num; ++i) {
		if (num % i == 0) {
		
		k=k+i;
		printf("%d ", i);
}
}
	if(k==num){
		printf("\n\n It's ur favourite number");
}
	else{
		printf("\n\n It's not ur favourite number");
		}
}


