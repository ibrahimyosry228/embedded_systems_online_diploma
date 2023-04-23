#copyright: Ibrahim Yosry

PROJECT=learn-in-depth
CC=arm-none-eabi-
CFLAGS=-g -mcpu=arm926ej-s
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
ASM=$(wildcard *.s)
ASO=$(ASM:.s=.o)
	
$(PROJECT): $(PROJECT).bin
	@echo "=============== Build is done ==============="

startup.o: startup.s
	$(CC)as  $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc $(CFLAGS) -c $(INCS) $< -o $@

$(PROJECT).elf: $(OBJ) $(ASO)
	$(CC)ld -T linker.ld $(LIBS) $(OBJ) $(ASO) -o $@

$(PROJECT).bin: $(PROJECT).elf
	$(CC)objcopy -O binary $< $@

clean_all:
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin

#qemu-system-arm -M versatilepb -m 128M -nographic -s -S -kernel learn-in-depth.elf