<<<<<<< HEAD
#include "frame_buffer.h"
#include "serial_port.h"
=======
 #include "frame_buffer.h"
    #include "serial_port.h"
>>>>>>> de44a54a7f768396d5edd3f1d5e778e62a1cff19


    
    int main(){

           char ptr2[] = "Welcome to XamOS";
   
    
<<<<<<< HEAD
    serial_write(0x3F8, ptr2, 19);
    fb_write(ptr2, 19);
    
    }
=======
    fb_write( ptr2, 19);
    }
>>>>>>> de44a54a7f768396d5edd3f1d5e778e62a1cff19
