# WireTiger 
## A network monitoring application written in C using libpcap library.

## how to build
- 1 make clean
- 2 make
- 3 ./wiretiger 

## specification
wiretiger [-d device] [-r file] [-s expression]

> -i  Listen on network device (e.g., en0). If not specified, wiretiger 
    should select a default device to listen on. 
> -r  Read packets from <file> (tcpdump format). 
> -s  Keep only packets that contain <string> in their payload.






