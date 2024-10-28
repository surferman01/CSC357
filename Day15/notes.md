# Day 15, 10/28/2024

Atomic Operations
- One operation vs multiple operations
- having multiple calls means we don't know how long in between calls it will take 
  - the processor may go and deal with other commands while executing program

Atomicity
- An opetation that is indivisible from the rest of system
  - completes or fails w/o side effects
Types
- file-level
  - ex) writing to file with O_APPEND flag
- memory-level
  - looking at same addr in mem

Atomic File Writing
- O_APPEND ensures writes to end of file atomically
- kernel moves fp to the end of wvery write to make concurrent writes safe

Convert string from like argv to int:
- atoi

fork();
returns pid 