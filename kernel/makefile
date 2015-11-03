main : bootloader.o gdt_asm.o kernel.o gdt.o kernel_asm.o k_lib.o periferique_lib.o
	ld -Tkernel.ld -melf_i386 bootloader.o gdt_asm.o kernel.o  gdt.o kernel_asm.o k_lib.o periferique_lib.o -o kernel.elf

gdt.o: gdt.c
	gcc -std=gnu99 -m32 -fno-builtin -ffreestanding -Wall -Wextra -c gdt.c

bootloader.o: bootloader.s
	nasm -f elf32 bootloader.s 

gdt_asm.o: gdt_asm.s
	nasm -f elf32 $<

kernel.o: kernel.c kernel_asm.o
	gcc -DTEST -std=gnu99 -m32 -fno-builtin -ffreestanding -Wall -Wextra -c kernel.c

k_lib.o: k_lib.c
	gcc -DTEST -std=gnu99 -m32 -fno-builtin -ffreestanding -Wall -Wextra -c k_lib.c

periferique_lib.o: periferique_lib.c
	gcc -DTEST -std=gnu99 -m32 -fno-builtin -ffreestanding -Wall -Wextra -c periferique_lib.c

kernel_asm.o :	kernel_asm.s
	nasm -f elf32 kernel_asm.s 

clean:
	rm -f *.o *.elf

