# include directive

---

## include is a way of including a standard or user-defined file in the program and is mostly written at the beginning of any C/C++ program.

- Header File or Standard files
- User-defined files

---

## Syntax

- #include "user-defined_file"  
  When using the double quotes(” “), the preprocessor access the current directory in which the source “header_file” is located. This type is mainly used to access any header files of the user’s program or user-defined files.

- `#include <header_file>`
  While importing file using angular brackets(<>), the preprocessor uses a predetermined directory path to access the file. It is mainly used to access system header files located in the standard system directories.

---

## Creating a User-defined header file

- Creating a user-defined header by the name of “file_name.h”.
- Created the main file where the above “file_name.h” will be included

---

```
// It is not recommended to put function definitions
// in a header file. Ideally there should be only
// function declarations. Purpose of this code is
// to only demonstrate working of header files.
void add(int a, int b)
{
    printf("Added value=%d\n", a + b);
}

void multiply(int a, int b)
{
    printf("Multiplied value=%d\n", a * b);
}
```

---

```
#include <stdio.h>

// " " used to import user-defined file
#include "file_name.h"

// main function
int main()
{
    // add function defined in process.h
    add(10, 20);

    // multiply function defined in process.h
    multiply(10, 20);

    // printf defined in stdio.h
    printf("Process completed");
    return 0;
}
```

---

## Creat user defind file

- creat file with name "sum.h"
- creat main file "AddTowNum.cpp" and add `#include "./HeaderFiles/sum.h"` in "AddTowNum.cpp" file and after use function of sum.h file in AddTowNum.cpp.

---

## For more Detailes [Link](https://www.geeksforgeeks.org/c-c-include-directive-with-examples/)
