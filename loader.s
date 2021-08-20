global loader                   ; the entry symbol for ELF

extern kmain 

KERNEL_STACK_SIZE equ 4096      ; size of stack in bytes



section .bss
align 4                         ; align at 4 bytes
kernel_stack:                   ; label points to beginning of memory
    resb KERNEL_STACK_SIZE      ; reserve stack for the kernel

section .text:                  ; start of the text (code) section
align 4                         ; the code must be 4 byte aligned


mov esp, kernel_stack + KERNEL_STACK_SIZE       ; point esp to the start of the
                                                ; stack (end of memory area)
loader:                         ; the loader label (defined as entry point in linker script)
    mov eax, 0xCAFEBABE         ; place the number 0xCAFEBABE in the register eax
.loop:
    jmp .loop                   ; loop forever

