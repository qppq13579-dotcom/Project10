#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 30
int main()
{
	int number[SIZE];
	srand(time(NULL));
	for (int i=0;i<SIZE;i++) number[i] = rand() % 10;
	for(int i=0;i<SIZE;i++){
		if (i % 10 == 0) printf("\n");
		printf("%d ", number[i]);
	}
	return 0;
}