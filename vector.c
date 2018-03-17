#include <stdio.h>
#include "vector.h"

int read_number() {
	int number = 0;

	printf( "Enter a number: " );
	scanf( "%d", &number );

	return number;
}

void read_vector( int vector[], int vector_length ) {
	int iterator = 0;
	
	printf( "Elements separated by spaces:\n" );

	for ( iterator = 0; iterator < vector_length; iterator++ ) {
		scanf( "%d", &vector[iterator] );
	}
	printf( "\n" );
}

void write_vector( int vector[], int vector_length ) {
	int iterator = 0;

	printf( "Vector: " );
	for ( iterator = 0; iterator < vector_length; iterator++ ) {
		printf( "%d ", vector[iterator] );
	}
	printf( "\n" );
}

void swap( int *number_1, int *number_2 ) {
	int aux;

	aux = *number_1;
	*number_1 = *number_2;
    *number_2 = aux;
}

int find_max_elem( int vector[], int vector_length ) {
	int max_elem = vector[0];

	for ( int iterator = 1; iterator < vector_length; iterator++ ) {
		if ( vector[iterator] > max_elem ) {
			max_elem = vector[iterator];
		}
	}

	return max_elem;
}
