# Using Valgrind

Valgrind is a powerful tool for detecting memory management issues, such as memory leaks, invalid memory access, and improper use of memory in C and C++ programs.

## 1. Install Valgrind

On Ubuntu or Debian-based systems, install with:

```sh
sudo apt-get install valgrind
```

## 2. Compile Your Program with Debug Symbols

To get the most useful output, compile your program with the `-g` flag:

```sh
gcc -g your_program.c -o your_program
```

## 3. Run Your Program with Valgrind

Use the following command to check for memory errors:

```sh
valgrind ./your_program
```

For more detailed memory leak information, use:

```sh
valgrind --leak-check=full ./your_program
```

## 4. Common Valgrind Options

- `--leak-check=full` – Provides detailed information about memory leaks.
- `--track-origins=yes` – Shows where uninitialized values originate.
- `--show-leak-kinds=all` – Displays all types of memory leaks.
- `--log-file=filename.txt` – Writes Valgrind output to a file.

## 5. Type of error

### 5.1. Definitely lost: 
This is the most serious leak. Valgrind determines that there are no longer any pointers to the beginning of the allocated block of memory. This means that the program has no way to free this block of memory. This is the top priority to fix.

### 5.2. Indirectly lost: 
A block of memory is classified as indirectly lost if it is only pointed to by other blocks of memory that are themselves definitely lost or indirectly lost. Imagine a linked list. If you lose the pointer to the first node (which would be definitely lost), then all the remaining nodes in the list would become indirectly lost. Usually, fixing the definitely lost error will automatically resolve the related indirectly lost errors.

### 5.3. Possibly lost: 
Valgrind finds one or more pointers to the block of memory, but none of them point to the beginning of the block. Instead, they point inside the block. This could be a bug, where a pointer has been changed by mistake. However, it could also be an intentional programming technique (pointer arithmetic). The programmer needs to check for this.

### 5.4. Still reachable: 
There is still at least one valid pointer pointing to the beginning of the memory block when the program terminates. Technically, the program still has the ability to free this memory. For small programs that run once and then shut down, this is usually not a big deal because the operating system will reclaim all the memory when the process terminates. However, in large or long-running applications, it can be a sign of poor resource management, where the memory could have been freed earlier to reduce overall memory usage.


