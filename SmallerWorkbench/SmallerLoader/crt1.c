#include <stdlib.h>

typedef struct
{
	int newmode;
} _startupinfo;

void __set_app_type(int);
void _controlfp(unsigned a, unsigned b);
void __getmainargs(int *pargc, char ***pargv, char ***penv, int globb, _startupinfo* s);
int main(int c, char **a);

int _start(void) {
	int c;
	char **a,**e;
	_startupinfo s = {0};
	_controlfp(0x10000, 0x30000);
	__set_app_type(1);
	__getmainargs(&c, &a, &e, 0, &s);
	exit(main(c,a));
}