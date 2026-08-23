#include <stdio.h>

typedef struct {
	int x;
	int y;
	int z;
}StructType;

StructType p;
StructType* ptr;

int main() {

	//
	p.x = 1;
	p.y = 2;
	p.z = 3;

	//
	ptr = &p;
	ptr->x = 1;
	ptr->y = 2;
	ptr->z = 3;

	return 0;
}