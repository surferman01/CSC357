# Day 17, Nov 1, 2024

Environment Vars
- in terminal
  - printenv: lists processes vars
- environ in C = an array of strings containing array vars that are NULL terminated
  - environ are stored in unique place in mem, not heap/stack/data seg

Exec
- Load and execute new program within current process
- ends the current processes actions and
- with environ vars
  - if unspecified, it will use automatically
  - if specified, accept as array