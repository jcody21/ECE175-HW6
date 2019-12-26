#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//  Author: John Cody
//  Date created: 03/12/2018
//  Program Description: This program a certain number into the equivalent of yards, feet, and inches. 

void dist_conv(int d, int *y, int *f, int *i);

int main(void) {
	
	int distance = 0, yards = 0, feet = 0, inches = 0;

	printf("Enter the distance in inches : ");
	scanf(" %d", &distance);

	dist_conv(distance, &yards, &feet, &inches);

	printf("%d inches equal %d yards, %d feet, and %d inches\n", distance, yards, feet, inches);

	return 0;
}

void dist_conv(int d, int *y, int *f, int *i) {
	*y = d / 36;
	d -= 36 * *y;
	*f = d / 12;
	d -= 12 * *f;
	*i = d;
}