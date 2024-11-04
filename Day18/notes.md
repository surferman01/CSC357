# Day 18, 11/4/2024

Assignment 5
- build webserver that can handle http requests 

IPC Pipes
- Interprocess communication 
- pipes are local processes communicating on machine
- sockets communicate over http
- pipes are files, so use read/write/close for them
  - creating one makes 2 file descriptors
    - one read, one write

Creating a pipe
- int pipe(int pipefd[2]);
- usually, create a pipe, and fork the parent
  - then close the unused fd for the parent and child based on which direction you want communication
