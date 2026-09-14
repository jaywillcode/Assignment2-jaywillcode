#include <stdio.h>
#include <math.h>
#include "statitics.h"
#include "output_array.h"

int main(){

        float arrayX[] = {2, 23 , 15, 0};
        float arrayY[] = {2.15, 3.9, 4.01, 1.1, 1.34, 5.3, 3.84};
        float arrayZ[] = {99, 34,88};
        int size1 = sizeof(arrayX) / sizeof(arrayX[0]);
        int size2 = sizeof(arrayY) / sizeof(arrayY[0]);
        int size3 = sizeof(arrayZ) / sizeof(arrayZ[0]);
	float max1 = Max(arrayX, size1);
        float max2 = Max(arrayY, size2);
	float max3 = Max(arrayZ, size3);
	float min1 = Min(arrayX, size1);
        float min2 = Min(arrayY, size2);
        float min3 = Min(arrayZ, size3);


        printf("!Printing Array 1 data!\n");
        Average(arrayX, size1);
        double devi1 =  standardDeviation(arrayX, size1);
	double abs1 = Absolute(max1, min1);
        printf("The STD is: %.2f\n", devi1);
	printf("The Max is: %.2f\n", max1);
	printf("The Min is: %.2f\n", min1);
	printf("The Absolute between Max and Min: %.2f\n", abs1);
        printf("!Printing Array 2 data!\n");
        Average(arrayY, size2);
        double devi2 =  standardDeviation(arrayY, size2);
	double abs2 = Absolute(max2, min2);
        printf("The STD is: %.2f\n", devi2);
	printf("The Max is: %.2f\n", max2);
	printf("The Min is: %.2f\n", min2);
	printf("The Absolute between Max and Min: %.2f\n", abs2);
        printf("!Printing Array 3 data!\n");
        Average(arrayZ, size3);
        double devi3 =  standardDeviation(arrayZ, size3);
	double abs3 = Absolute(max3, min3);
        printf("The STD is: %.2f\n", devi3);
	printf("The Max is: %.2f\n", max3);
	printf("The Min is: %.2f\n", min3);
	printf("The Absolute between Max and Min: %.2f\n", abs3);



        return 0;


   }

