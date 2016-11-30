/*
 * just a test program to test wheather the libpcap is installed successfully.
 */


#include <pcap.h>
#include <stdio.h>

int main() 
{
    char errBuf[PCAP_ERRBUF_SIZE], *device;
    device = pcap_lookupdev(errBuf);
    if (device) 
        printf("Success: device: %s\n", device);
    else 
        printf("error: %s\n", errBuf);
    return 0;
}
