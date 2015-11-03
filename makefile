run: main
	qemu-system-i386 -hda iso/kernel.iso

main:
	make -C kernel
	mkdir -p iso/boot/grub
	cp kernel/kernel.elf iso/boot/kernel.elf
	cp grub/grub.cfg iso/boot/grub/grub.cfg
	grub-mkrescue -o iso/kernel.iso iso



clean:
	make clean -C kernel
	rm -R -f iso

