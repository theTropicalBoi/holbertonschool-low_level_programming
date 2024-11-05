# C - Pointers, arrays and strings

## Task 0 - 98 Battery st.
Write a function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.
### Output:
`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98`

`./0-98`

```
n=402
n=98
```
---
## Task 1 - Don't swap horses in crossing a stream
Write a function that swaps the values of two integers.
### Output:
`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap`

`./1-swap`

```
a=98, b=42
a=42, b=98
```
---
## Task 2 - This report, by its very length, defends itself against the risk of being read
Write a function that returns the length of a string.
### Output:
`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen`

`./2-strlen`

```
16
```
---
## Task 8 - Arrays are not pointers
Write a function that prints n elements of an array of integers, followed by a new line.
- Prototype: void print_array(int *a, int n);
- where n is the number of elements of the array to be printed
- Numbers must be separated by comma, followed by a space
- The numbers should be displayed in the same order as they are stored in the array
- You are allowed to use printf
### Output:
`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array && ./8-print_array`

```
98, 402, -198, 298, -1024
```
---
## Task 9 - strcpy
Write a function that copies a string.
- Prototype: char *_strcpy(char *dest, char *src);
Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
- Return value: the pointer to dest
FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.
### Output:
`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy && ./9-strcpy`

```
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
```
---
# Task 10 - Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers
Write a function that convert a string to an integer.
- Prototype: int _atoi(char *s);
- The number in the string can be preceded by an infinite number of characters
- You need to take into account all the - and + signs before the number
- If there are no numbers in the string, the function must return 0
- You are not allowed to use long
- You are not allowed to declare new variables of “type” array
- You are not allowed to hard-code special values
- We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.
- FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi && ./100-atoi`

```
98
-402
-98
214748364
0
402
98
402
```
---

# Project 3
## Task 2. strncpy
Write a function that copies a string.
- Prototype: char *_strncpy(char *dest, char *src, int n);
- Your function should work exactly like strncpy
FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more.
### Output:
`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strncpy.c -o 2-strncpy && ./2-strncpy`

```
*************************************************************************************************
First********************************************************************************************
First********************************************************************************************
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f
0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e
0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68
0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00
```
---