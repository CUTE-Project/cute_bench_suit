riscv64-unknown-elf-gcc -DPREALLOCATE=1 -mcmodel=medany -std=gnu99 -O0 -ffast-math -fno-common -fno-builtin-printf -Bstatic -nostdlib -nostartfiles -lm -lgcc -T test.ld common/syscalls.c common/crt.S -I . vgg19/32bits/4core/1.c -o vgg19/32bits/4core/1_ohb4 -DdataType=1 -DOHB=4

