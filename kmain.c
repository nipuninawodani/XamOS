
/* The C function */
    int sum_of_three(int arg1, int arg2, int arg3)
    {
        return arg1 + arg2 + arg3;
    }


<#include "drivers/frame_buffer.h"
    #include "drivers/serial_port.h"

#include "frame_buffer.h"
    #include "serial_port.h"


    
    int main(){

           char ptr2[] = "Welcome to CarbonOS";
   
    
    serial_write(0x3F8, ptr2, 19);
    fb_write(ptr2, 19);
    


    }

    }

    }

