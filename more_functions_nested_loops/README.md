# C - More functions, more nested loops.

---
## Task 8:
### Question:
Write a function that prints a square, followed by a new line.

- Prototype: void print_square(int size);
- You can only use _putchar function to print
- Where size is the size of the square
- If size is 0 or less, the function should print only a new line
- Use the character # to print the square

### Output Check:
`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-squares`

`./8-squares`

```
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########
```
---
## Task 9:
### Question:
Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.
- Each number or word should be separated by a space
- You are allowed to use the standard library

### Output Check:
`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz`

`./9-fizz_buzz `

```1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz```

---