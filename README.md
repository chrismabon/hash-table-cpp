# Hash Table

#### A rather simple hash table for strings, written in C++

PLEASE READ => _*(This project is incomplete: it is missing many core features and may contain numerous bugs.
It is advised not to use any code in this repo until those issues are addressed and this warning 
is subsequently removed. Thanks!)*_ 

## Structure

```
Description

- Table class wraps the array of HashList classes and information about the array
- HashList class is a list of keys sharing the same hash value (hash collision)
    ~ HashList classes do not store the generated hash value
- KeyNode class contains the actual key as well as a link to the next node
- Output class wraps console output and text formatting functions
    ~ Table class passes object handles to Output class for printing
```

## Functionality

```
Operations

- add and delete keys
- lookup and peek at key(s) for given hash
- check if a key or hash is already an entry in the table
- generate a hash from a key without adding it to the table
- clear the table of all entries
- print hash entry to console

Constraints

- Only accepts C++ std::string as the key value type
- Table should not be more than 70% full for best performance
```

## Tools

* [CLion](https://www.jetbrains.com/clion/documentation/) -  IDE by Jetbrains
* [CMake](https://cmake.org/documentation/) - C/C++ build manager
* [GDB](https://www.gnu.org/software/gdb/documentation/) - GNU Project Debugger
* [GCC](https://gcc.gnu.org/onlinedocs/) - GNU C/C++ compiler

## License and Copyright

This project is licensed under the GNU General Public License v3.0 (GNU GPLv3)

Copyright 2021 Chris Mabon
