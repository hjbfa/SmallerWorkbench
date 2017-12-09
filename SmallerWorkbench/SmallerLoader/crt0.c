#include <stdlib.h>

void __set_app_type(int);
void _controlfp(unsigned a, unsigned b);
int main();

typedef struct
{
	int newmode;
} _startupinfo;

int _start(void) {
	_controlfp(0x10000, 0x30000);
	__set_app_type(1);
	exit(main());
}