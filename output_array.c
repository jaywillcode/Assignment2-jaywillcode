#include <stdio.h>
#include "output_array.h"

double Min(float *array, int size1)
{
	double min = array[0];
	int Size = size1;
	for (int i = 1; i < Size; i++){
	       	if (array[i] < min){
			min = array[i];
		}
	}
	//printf("The Min Value is: %.2f\n", min);
	return min;
}

double Max(float *array, int size1)
{
	double max = array[0];
	int Size = size1;
        for (int i = 1; i < Size; i++){
                if (array[i] > max){
                	max = array[i];
		}
	}
	//printf("The Max Value is: %.2f\n", max);
        return max;
}

double Absolute(float max, float min)
{

	return max - min;
}
