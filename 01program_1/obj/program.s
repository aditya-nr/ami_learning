	.file	"program.c"
	.text
	.section	.rodata
.LC0:
	.string	"Enter an integer value: "
.LC1:
	.string	"%d"
.LC2:
	.string	"Enter a float value: "
.LC3:
	.string	"%f"
	.align 8
.LC4:
	.string	"\n--------------------------------"
.LC5:
	.string	"VALUE"
.LC6:
	.string	"SIZE"
.LC7:
	.string	"TYPE"
.LC8:
	.string	"|%6s |%10s |%10s|\n"
	.align 8
.LC9:
	.string	"--------------------------------"
.LC10:
	.string	"int"
.LC11:
	.string	"|%6s |%10zu |%10d|\n"
.LC12:
	.string	"float"
.LC13:
	.string	"|%6s |%10zu |%10.2f|\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-4(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-8(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC4(%rip), %rdi
	call	puts@PLT
	leaq	.LC5(%rip), %rcx
	leaq	.LC6(%rip), %rdx
	leaq	.LC7(%rip), %rsi
	leaq	.LC8(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC9(%rip), %rdi
	call	puts@PLT
	movl	-4(%rbp), %eax
	movl	%eax, %ecx
	movl	$4, %edx
	leaq	.LC10(%rip), %rsi
	leaq	.LC11(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movss	-8(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	cvtss2sd	%xmm0, %xmm1
	movq	%xmm1, %rax
	movq	%rax, %xmm0
	movl	$4, %edx
	leaq	.LC12(%rip), %rsi
	leaq	.LC13(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	leaq	.LC9(%rip), %rdi
	call	puts@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Debian 10.2.1-6) 10.2.1 20210110"
	.section	.note.GNU-stack,"",@progbits
