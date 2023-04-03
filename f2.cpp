/**
 * File:    f2.Cpp
 *
 * Author1:  Patel Bhumitkumar Kalpeshbhai
 * Date:     21/01/2023
 * Course:   Software Engineering Technology
 *
 * Summary of File:
 *
 *   This file contains code which add together 
 *   the integers from 1 to 100 using a while loop
 *
 */

#include<iostream>  // we use iostream as input-output stream

int main() {

	int num = 1;
	int sum = 0;

	while (num <= 100)
	{
		sum = sum + num;
		num++;   //num++ means increasing num to 1 at every iteration
	}

	printf("%d\n", sum);   // here we used %d to define sum as a decimal and used \n to break the line

	/* NOTE : we can also use std::cout and std::endl like std::cout << sum << std::endl */

}