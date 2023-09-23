NAME=lcd

NANOV_SDK=../../nanoV-sdk

all: $(NAME).uf2

clean:
	rm *.o *.elf tmp.rbin *.bin

%.o: %.c
	riscv32-unknown-elf-gcc -O2 -I$(NANOV_SDK) -march=rv32e -mabi=ilp32e -nostdlib -nostartfiles -ffreestanding -ffunction-sections -fdata-sections -lc -c $< -o $@

%.o: %.s
	riscv32-unknown-elf-as -march=rv32e -mabi=ilp32e $< -o $@

$(NAME).elf: main.o lcd.o logo.o
	riscv32-unknown-elf-ld $^ $(NANOV_SDK)/start.o /opt/riscv/riscv32-unknown-elf/lib/libc.a $(NANOV_SDK)/nanoV.a /opt/riscv/lib/gcc/riscv32-unknown-elf/12.2.0/libgcc.a  -T $(NANOV_SDK)/memmap --gc-sections -o $@

$(NAME).bin: $(NAME).elf
	riscv32-unknown-elf-objcopy $< -O binary tmp.rbin
	python3 $(NANOV_SDK)/reverse_bits.py tmp.rbin $@

$(NAME).uf2: $(NAME).bin
	bin2uf2 -o $@ 0x20000000 $<

$(NAME).hex: $(NAME).bin
	od -An -t x4 -w4 -v $< > $@
