# Day 22, 11/15/2024

Signal Blocking
- mask signals to block their functionality
- use sigmask to change which signals enabled

Reentrant Functions
- functions that maintain consistent state even if called during own execution
- functions relying on static / global vars are non-reentrant
- Dont use non-reentrant functions with sig handlers
  - malloc()
  - printf()
  - exit()
  - functions affecting shared resources
- is an atomic operation like a single instruction in assembly?

Sigaction
- struct sigaction sa;
- sa.sa_handler = int_handler;

Threads
- allow concurrent programming in single process
- process 1 can have multiple threads
- 