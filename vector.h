#define G_MAX_VECTOR_LENGTH 1000
int g_vector[G_MAX_VECTOR_LENGTH];
int g_vector_length;

int read_number();

void read_vector( int vector[], int vector_length );

void write_vector( int vector[], int vector_length );

void swap( int *number_1, int *number_2 );

int find_max_elem( int vector[], int vector_length );
