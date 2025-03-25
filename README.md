# C-Garbage-Collector
This is a simple implementation of a garbage collector in C. The garbage collector automatically manages memory allocation and deallocation, reducing the likelihood of memory leaks in programs.

## Features
Automatic memory management
Simple, easy-to-understand implementation
Memory tracking and cleanup
Designed to be used in C programs that manually manage memory

## Installation

  Clone the repository:
   ```bash
   git clone https://github.com/Seraph919/C-Garbage-Collector-V1.git
   cd C-Garbage-Collector-V1
   ```
## Usage

1. Include the garbage collector files in your program.
2. Use `maloc()` to allocate memory instead of `malloc()`.
3. At the end of your program, use `free_garbage(data()->garbage)` to free all allocated memory.
