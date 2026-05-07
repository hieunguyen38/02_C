#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int* data;
	int numItems;
	int size;
}List;

void addToList (List)