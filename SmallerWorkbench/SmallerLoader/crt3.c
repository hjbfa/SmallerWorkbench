.text
  .global _start
_start:
  subq $40, %rsp
  movl $196608, %esi
  movl $65536, %edi
  movl $0, 12(%rsp)
  call _controlfp
  movl $1, %edi
  call __set_app_type
  leaq 12(%rsp), %r8
  leaq 24(%rsp), %rdx
  leaq 16(%rsp), %rsi
  leaq 8(%rsp), %rdi
  xorl %ecx, %ecx
  call __getmainargs
  movl 8(%rsp), %edi
  movq 24(%rsp), %rdx
  movq 16(%rsp), %rsi
  call main
  movl %eax, %edi
  call exit
