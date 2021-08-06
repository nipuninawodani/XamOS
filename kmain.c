<<<<<<< HEAD
<<<<<<< HEAD
<#include "drivers/frame_buffer.h"
    #include "drivers/serial_port.h"
=======
=======
>>>>>>> ebc526c5baf66a06f408ae57318400e413016bb2
#include "frame_buffer.h"
    #include "serial_port.h"
>>>>>>> 2121c0227fc3d4a8e9815d23ceb594ae5f784cbb


    
    int main(){

           char ptr2[] = "Welcome to CarbonOS";
   
    
    serial_write(0x3F8, ptr2, 19);
    fb_write(ptr2, 19);
    
<<<<<<< HEAD
<<<<<<< HEAD
    }
=======
    }
>>>>>>> 2121c0227fc3d4a8e9815d23ceb594ae5f784cbb
=======
    }
>>>>>>> ebc526c5baf66a06f408ae57318400e413016bb2
