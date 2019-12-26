#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//  Author: John Cody
//  Date created: 03/13/2018
//  Program Description: This program runs a simulated experiment. 

int switcheroo (int x);

int main(void) {
	
	int i = 0, j = 0;
	int doors[100];

	for (i = 0; i < 100; i++) {    // loops through and "closes" all of the doors
		doors[i] = 0;
	}
	
	for (i = 1; i <= 100; i++) {     // loops through all of the keys
		j = 1;
		while (i * j <= 100) {
			doors[i*j-1] = switcheroo(doors[i*j-1]);
			j++;
		}
	}
	
	for (i = 0; i < 100; i++) {
		if (doors[i]) {
			printf("%d\n", i + 1);
		}
	}

	return 0;
}

int switcheroo(int x) {
	if (x == 0) {
		return 1;
	}
	if (x == 1) {
		return 0;
	}
}