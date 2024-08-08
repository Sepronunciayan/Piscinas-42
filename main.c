/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(int n);

int main() {

	ft_print_numbers(-5);

	return 0;
}

void ft_print_numbers(int n) {

	if(n >= 0) {

		char pos='P';

		write(1, &pos, 1);

	} else {

		char neg='N';

		write(1, &neg, 1);

	}

}