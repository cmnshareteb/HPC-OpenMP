//hello world with thread ID and no of threads specified
#include<stdio.h>
#include "omp.h"

int main()
{
	int i=256;
	#pragma omp parallel num_threads(10)
	{
		int x;
		x=omp_get_thread_num();
		printf("\nx=%d  i=%d\n",x,i);
	}
}


/*
student@student-OptiPlex-3020:~$ gcc -fopenmp run2.c
student@student-OptiPlex-3020:~$ ./a.out

*/
