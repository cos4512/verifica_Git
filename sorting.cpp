#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BUBBLE 100
int main()
{
	int myArray[BUBBLE];
	int i, j;
	int temp = 0;
	int num;
	srand(time(NULL));
	for (i = 0; i < BUBBLE; i ++)
	{    
		   num = rand() % BUBBLE + 1;
		   myArray[i] = num;
	}
	for(i = 0; i < BUBBLE; i++)
	{

		for (j = 0; j < BUBBLE-1; j++)
        {
            if (myArray[j] > myArray[j+1])
			{
				temp = myArray[j];
				myArray[j] = myArray[j+1];
				myArray[j+1] = temp;
			}
        }
	}
	for (i = 0; i < BUBBLE; i++)
	{
		printf("%d\n",myArray[i]);
	}
	return 0;
}
