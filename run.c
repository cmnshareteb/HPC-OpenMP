#include<stdio.h>
#include "omp.h"

int main()
{
	#pragma omp parallel
	{
		printf("\nHello world!!\n");
	}
}


/*
student@student-OptiPlex-3020:~$ gcc -fopenmp run2.c
student@student-OptiPlex-3020:~$ ./a.out

*/
