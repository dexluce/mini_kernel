global kernel_smiley

section .text

kernel_smiley:
	mov eax, 0xB8000
	mov word [eax], 0x0E01
	jmp $
