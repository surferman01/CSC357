# Day 13, 10/21/2024

Files and Dirs

- inodes
- same as p2

File Descriptors

- open()
  - returns int -> file descriptor
- 0-2 are stdin, stdout, stderr
- opening a new file creates a new file descriptor
  - points to 'open file description'

Open File Description
- has file / inode
- offset
- access mode(s)
- status

Append / Truncation
- appending always ensures writing to end of file properly
- truncating removes data from file and then allows writing

Stat
- syscall that fills a struct with information ab the file