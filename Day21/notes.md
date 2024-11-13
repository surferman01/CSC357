# Day 21 11/13/2024

Signals
- ctrl + c = sigint
- Unchangable signals
  - SIGKILL
- Async notifications sent to process
- Interrupts
- Timers
- Errors
- User-defined signals
  - SIGUSER1, SIGUSER2
- How to handle signals
  - Ignore it
  - handle signal with function
  - let system handle signal

Signal Types
- SIGINT
  - interrupt, terminate process
- SIGKILL
  - immediately terminate process, unmodifiable
- SIGSTOP + SIGCONT
  - pause / unpause process
  - SIGSTOP ! modifiable
  - ctrl + z
- SIGSEGV
  - segfault, terminate process and generate core dump
- SIGALRM
  - sent when a call to alarm() expires
  - terminates process by default
- SIGCHILD
  - sent to parent when child proc terminates
  - ignored by default
- SIGQUIT
  - exit and send core dump
  - ctrl + \

Signal Functions
- kill(pid, SIGKILL)
  - send SIGKILL to pid
- raise(SIGSTOP)
  - send signal to calling process
- pause()
  - blocks program until signal
- signal()
  - change how signals handled
- sigaction()
  - mordern version of signal()

Function Pointers
- double (*function_ptr)(double, int)

Signal
- void (*signal(int signum, void (*handler)(int)))(int);