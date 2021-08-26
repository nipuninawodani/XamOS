#include "io.h"
#include "serial.h"
#include "framebuffer.h"
#include "keyboard.h"
#include "memory_segments.h"
#include "interrupts.h"
#include "multiboot.h"

char message[]= "Xam OS";

int kmain(multiboot_info_t *mbinfo)
{
	
	
	fb_move_cursor(6*80);
	fb_write_str(message,sizeof(message));
	serial_write(message,sizeof(message));
	segments_install_gdt();
	interrupts_install_idt();
	
	
	
	return 0;
}
