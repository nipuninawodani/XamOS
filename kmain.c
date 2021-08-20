#include "io.h"
#include "serial.h"
#include "framebuffer.h"
#include "keyboard.h"
#include "memory_segments.h"
#include "interrupts.h"


char message[]= "XamOS";

int kmain()
{

	/*fb_clear();*/
	fb_move_cursor(6*80);
	fb_write_str(message,sizeof(message));
	/*fb_write_str("hello\n",5); TODO */
	serial_write(message,sizeof(message));
	segments_install_gdt();
	interrupts_install_idt();
	

	return 0;
}
