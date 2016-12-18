/*
 * just a test program to test wheather the libpcap is installed successfully.
 */


#include <pcap.h>
#include <stdio.h>

int main() 
{
    char errBuf[PCAP_ERRBUF_SIZE], *device;
    device = pcap_lookupdev(errBuf);
    char dev[] = "en0";
    bpf_u_int32 mask, net;
    pcap_lookupnet(dev, &net, &mask, errBuf);
    printf("dev: %s %d %d %s\n", dev, net, mask, errBuf);
    return 0;
}
