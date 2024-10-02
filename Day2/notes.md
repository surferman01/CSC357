# Day 2

Sept 25 2024

Runtime Stack and Memory

Processes

- Process: an instance of a running program, program code and its activity
- Virtual Memory: processes operate in virtual mem space
- Memory Protection: One processess cannot access memory of another
- Efficiency: Multiple processes share same physical memory while having own virtual addr space

Problem:

- Storing processes in vmem means spatial locality (on the phyiscal ram) is bad

Memory Layout
~ Note: all this memory is virtual -> unknown location in physical mem

- Text Segment
  - Program Instructions
- Data Segment
  - Global / Static vars
- Uninitialized Data Segment (bss)
  - Unassigned data
  - Like inputs that haven't been given yet
  - Maybe defaults to 0...
- Heap
  - Dynamically allocated memory
  - Builds upwards towards Stack
- Stack
  - Manages order of operations
  - Builds downwards towards Heap
  - Stack overflow / Segfault if stack grows too large and uses memory it shouldn't
- CL-args and env vars
  - Small chunk to for flags... etc

Call Stack

- LIFO
- Function Calls (control flow)
- local vars
- return addrs

Stack Frame

- created when function called
- Contains
  - Return addr
  - Params
  - Local Vars
- Pushed onto stack when function called, popped on return

Stack Diagrams

- Stack frames added vertically
- Vars listed in order of init
- popped frames have dashed rectangle around them
