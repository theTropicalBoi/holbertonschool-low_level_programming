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
