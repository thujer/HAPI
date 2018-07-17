

#ifndef __HAPI_H
    #define __HAPI_H
    
    extern char  hapi(char c);                // output routine (putchar compatible)
    extern void  hapi_init();                 // reset communication
    extern char  hapi_getchar();
    extern void  hapi_proc(void);             // communication process
    extern char *hapi_result_string();        // text result code

    extern char idata hapi_dest_device_id;    // destination device address on interface
    extern char idata hapi_this_device_id;    // self device address on interface
    extern char idata hapi_rec_result_code;   // receive error status
    extern char idata hapi_snd_result_code;   // send error status
    extern char idata hapi_rec_in;            // pocet byte v prijimaciho bufferu
#endif

