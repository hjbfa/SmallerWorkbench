.text
	.global _start
_start:
  subq $8, %rsp
  movl $196608, %esi
  movl $65536, %edi
  call _controlfp
  movl $1, %edi
  call __set_app_type
  call main
  movl %eax, %edi
  call exit
