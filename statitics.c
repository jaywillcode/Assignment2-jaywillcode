#include <stdio.h>
#include <math.h>
#include "statitics.h"
double standardDeviation( float *arrayX, int size1){
        float sum;
        for (int i = 0; i < size1; i++){
                sum +=arrayX[i];
        }
        float mean =  sum / size1;
        float varianceSum;

        for(int i = 0; i < size1; i++){
                varianceSum += (arrayX[i] - mean) * (arrayX[i] - mean);
        }

        float stdDevi = varianceSum / size1;

                return sqrt(stdDevi);

}
double Average(float *arrayX, int size1){

        double ALL;
        for (int i = 0; i < size1; i++){
                ALL+= arrayX[i];
        }
        printf("The Sum is: %.2f\n", ALL);
        printf("Average of array = %.2f\n", ALL/size1);

        return 0;

}
