.set MAGIC, 0x1BADB002
.set FLAGS, (1<<0 | 1<<1)
.set CHECKSUM, -(MAGIC + FLAGS)

.section .multiboot
    .long MAGIC
    .long FLAGS
    .long CHECKSUM

.section .text
.extern kernelMain
.extern callConstructors
.global loader

loader:
    mov $kernel_stack, %esp  # Set up the stack
    call callConstructors  # Call global constructors
    #push %eax
    #push %ebx
    push $0
    push $0
    call kernelMain  # Call the main kernel function

_stop:
    cli
    hlt
    jmp _stop

.section .bss
#.section 2*1024*1024; # 2MB
.lcomm kernel_stack, 4096
# kernel_stack:
kernel_stack_end: