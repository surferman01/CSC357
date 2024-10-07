# Day 7, 10/7/2024

Project 2

- create sudo filesystem
- files in fs are inodes
  - inode = metadata for the directories / files
- read a folder like this an add to it

use hex editor to read inodes_list
32 bits correspond to file number
then an identifier to determine file or directory

file 0 is root directory and you cannot go higher than that (..)

File Descriptors

- Non negative int assigned to each open file
  - 0 = stdin
  - 1 = stdout
  - 2 = stderr
Syscalls for file IO -> low level unbuffered I/O
- open()
- read()
- write()
- lseek()
- close()
- Tied to operating system kernel

Opening Files
#include <fcntl.h>
int open(const char *pathname, int flags, permission number);
returns file descriptor -> an integer 

^ only need permission number if doing O_CREAT

Flags

- O_RDONLY -> reading only
- O_WRONLY -> writing only
- O_RDWR -> read + write
- O_CREAT -> create file if doesn't exist -> requires permission num
- O_TRUNC -> truncate file to zero length if it exists
- O_APPEND -> append to end of file

when chosing flags, you can OR them |

for the permission number, its like chmod

- use 0666

Closing Files
#include <unistd.h>
int close(int fd);
returns 0 on success, -1 on error

Reading / Writing files

read:
#include <unistd.h>
ssize_t read(int fd, void *buf, size_t count);
returns number of bytes read, 0 on EOF, -1 on err

write:
#include <unistd.h>
ssize_t write(int fd, const void *buf, size_t count);
returns num of bytes written, -1 on err

buf = starting address to read data into/copy data
count = # of bytes

File Positioning
#include <sys/types.h>
#include <unistd.h>
off_t lseek(int fd, off_t offset, int whence);


EOF
