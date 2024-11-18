# Day 23 11/18/2023

Threads 

Single-Code Systems
- no real concurrency because cpu can only work on one instr at a time

Multi-Core Systems
- like having multiple cpus
- doesn't make any individual process faster, but makes the entire program take less time
- Hyperthreading
  - 1 CPU with multiple processing cores

Threads
- lightweight independent unit of execution within a single process
- shared data
  - shares resources (mem / file descriptors)
- each thread has its own fixed-size stack within shared single process memory layout
- each thread gets its own processor core

Creating Threads
