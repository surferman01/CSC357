# Day 16, 10/30/2024

PIDs
- 0 = sanity check that computer is running
- 1 = init
- pid_t getpid()      // gets curring PID
- pid_t getppid()     // gets parent PID

Fork
- creates new processes
  - pid_t fork(void);
  - returns based on which process
    - parent = PID of child
    - child = 0
- Fork basically just starts a new process at the fork() command that is idetical to the spawned one and gives the child a fork() return of 0

Orphan Process
- If a parent process exits while child exists, ppidd() child = 1 = init process
- init runs systemd which handles the orphans so the pid of the child may not be 1, but instead the systemd orphan handler

Wait
- block execution until child process finishes executing
- pid_t wait(int *wstatus);
- pid_t waitpid(pid_t pid, int *wstatus, int options);
- if you create a child, it will linger until a wait call
  - zombie process
  - init will wait for a zombie process after parent exits