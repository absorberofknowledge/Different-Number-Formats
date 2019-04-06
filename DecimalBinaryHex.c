// DecimalBinaryHex.c
// by Luke Harrison
// The HarriSoft Corporation

/* A program that takes the imput of 2 numbers and then displays all numbers
   between the 2 in Decimal, Binary, and Hexadecimal formats */

// Program will also accept inputs from the command line if run that way...

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void display_binary(int num);

int main(int argc, char *argv[]) {

	int starting_number;
	int ending_number;

	puts("Decimal-Binary-Hexadecimal Printer v1.0");
	puts("By Luke Harrison");
	puts("The HarriSoft Corporation\n");


	if (argc == 1) {

		printf("Enter The Starting Number: ");
		scanf("%d", &starting_number);
		printf("Enter The Ending Number: ");
		scanf("%d", &ending_number);
	}

	else {

		starting_number = atoi(argv[1]);
		ending_number = atoi(argv[2]);
	}
	


	printf("\n  Decimal - Binary - Hex\n\n");



	for (int i = starting_number; i <= ending_number; i++) {



		printf("%7d - ", i);

		display_binary(i);

		printf("0x%04x", i);

		printf("\n");
	}


	return 0; 
}

void display_binary(int num) {
	for (int c = 7; c >= 0; c--) { 
		int k = num >> c; 
		if (k & 1) printf("1");
		else printf("0");
	}
	printf(" - ");
}