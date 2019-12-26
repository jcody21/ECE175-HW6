#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//  Author: John Cody
//  Date created: 03/12/2018
//  Program Description: This program takes an array and its size as input and outputs the minimum, maximum and mean values.

void array_processing(int *x, int size, int *min_p, int *max_p, float *mean_p);

int main(void) {
	int length = 23;
	int data_ar[] = { -3, 5, 6, 7, 12, 3, 4, 6, 19, 23, 100, 3, 4, -2, 9, 43, 32, 45, 32, 2, 3, 2, -1};
	int min, max;
	float mean = 0.0;

	array_processing(data_ar, length, &min, &max, &mean);

	printf("The maximum of the array is %d\n", max);
	printf("The minimum of the array is %d\n", min);
	printf("The mean of the array is %.1f\n", mean);
	
	return 0;
}

void array_processing(int *x, int size, int *min_p, int *max_p, float *mean_p) {
	int sum = 0, i = 0;
	*min_p = *x; 
	*max_p = *x; 

	for (i = 0; i < size; i++) {
		sum = sum + *(x + i);
		if (*min_p > *(x + i)) {
			*min_p = *(x + i);
		}
		if (*max_p < *(x + i)) {
			*max_p = *(x + i);
		}
	}
	*mean_p = (sum * 1.0) / (size);
}