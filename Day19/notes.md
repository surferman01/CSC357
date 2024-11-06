# Day 19, 11/6/2024

Pipe error
- since we use FILE*, it creates buffered file streams 
- dont remember what she said for how to deal with this tbh

Sockets
- like a pipe
- uses TCP or UDP
- TCP
  - transmission control protocol
  - reliable / ordered data connection
  - establishes connection and maintains it
  - SLOWER
- UDP
  - user datagram protocol
  - unreliable / connectionless / unordered
  - FASTER

IPv4 / IPv6
- sockets require senders / recievers to specify either own or remote addresses for connections
- AF_INET = IPv4
- AF_INET6 = IPv5

Socket functions
- socket
  - creates endpoint and allocates file descriptor
- bind
  - bind the filedescriptor to an address so that peripherals can find/see/use it
  - to bind, fill up struct with headers
    - AF_INET
  - struct sockaddr_in address;

Byte Order
- Big endian
  - store more significant byte first
- little endian
  - store LSB first
- network prefers big endian
- systems usually use little endian
- ex)
  - hex: 0x34_01
  - big endian: 03 04 00 01
  - little endian: 01 00 04 03
- send over network as BIG endian (called network byte order)
- send to system as little endian (called system byte order)

Server-Client socket setup
1. init socket on server / client side
2. bind server socket to ip
3. make server listen for client
4. accept connection from client
5. establish new socket for communication

Acquiring Remote Address
- getaddrinfo(hostname, port, hints, &result).hints
  - returns linked list of possible addresses