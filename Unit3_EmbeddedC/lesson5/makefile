#copyright: Ibrahim Yosry

PROJECT=learn-in-depth_cortex_m3
CC=arm-none-eabi-
CFLAGS=-mthumb -mcpu=cortex-m3 -gdwarf-2
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
ASM=$(wildcard *.s)
ASO=$(ASM:.s=.o)
	
$(PROJECT): $(PROJECT).bin
	@echo "=============== Build is done ==============="

# startup.o: startup.s
# 	$(CC)as  $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc $(CFLAGS) -c $(INCS) $< -o $@

$(PROJECT).elf: $(OBJ) $(ASO)
	$(CC)ld -T linker.ld $(LIBS) $(OBJ) $(ASO) -o $@ -Map=Map_file.map

$(PROJECT).bin: $(PROJECT).elf
	$(CC)objcopy -O binary $< $@

clean_all:
	rm *.o *.elf *.bin *.map

clean:
	rm *.elf *.bin *.map

#qemu-system-arm -M versatilepb -m 128M -nographic -s -S -kernel learn-in-depth.elf