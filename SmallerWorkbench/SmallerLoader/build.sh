gcc -nostartfiles -c crt3.c
gcc -nostartfiles -c crt1.c
gcc -nostartfiles -c crt0.c
ar rcs crt0.a crt0.o
ar rcs crt1.a crt1.o
ar rcs crt3.a crt3.o