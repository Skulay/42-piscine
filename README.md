*This project has been created as part of the 42 curriculum by alehamad.*

# Piscine 42

My work from the Piscine of 42 Paris: four weeks of daily C and shell exercises, plus the weekend group projects (rushes).

![language](https://img.shields.io/badge/language-C-000000?style=flat-square)
![language](https://img.shields.io/badge/language-Shell-000000?style=flat-square)
![school](https://img.shields.io/badge/school-42-000000?style=flat-square)

## Overview

The Piscine is the selection month of 42. Every day comes with a new set of exercises, checked by other students and by an automatic grader, with no teacher and no lesson: everything is learned from the subject, the `man` pages and the other students.

The goal of the Piscine is to learn:

- the basics of **C**: syntax, compilation, pointers, arrays, strings, memory allocation
- how to work with the **Unix shell**, `git` and the command line tools
- how to write clean code that follows the **Norm**, the 42 coding standard
- how to work in a **team** on the weekend rushes
- the foundations needed for the common core projects (libft, ft_printf, get_next_line…)

## Contents

### Shell

| Module | Exercise | Topic |
|---|---|---|
| Shell00 | ex00 – ex05 | Files, permissions and dates (`tar` archives), SSH key, `ls` options, `git log` |
| Shell01 | ex01 | `print_groups.sh`: groups of `$FT_USER`, separated by commas |
| | ex02 | `find_sh.sh`: names of every `.sh` file in the tree, without the extension |
| | ex03 | `count_files.sh`: number of files and folders in the tree |
| | ex04 | `MAC.sh`: MAC addresses of the machine |

### C

| Module | Topic | Exercises |
|---|---|---|
| C00 | `write`, loops | `ft_putchar`, `ft_print_alphabet`, `ft_print_reverse_alphabet`, `ft_print_numbers`, `ft_is_negative`, `ft_print_comb`, `ft_print_comb2`, `ft_putnbr` |
| C01 | Pointers | `ft_ft`, `ft_ultimate_ft`, `ft_swap`, `ft_div_mod`, `ft_ultimate_div_mod`, `ft_putstr`, `ft_strlen`, `ft_rev_int_tab` |
| C02 | Strings | `ft_strcpy`, `ft_strncpy`, `ft_str_is_alpha`, `ft_str_is_numeric`, `ft_str_is_lowercase`, `ft_str_is_uppercase`, `ft_str_is_printable`, `ft_strupcase`, `ft_strlowcase`, `ft_strcapitalize`, `ft_strlcpy` |
| C03 | String comparison and concatenation | `ft_strcmp`, `ft_strncmp`, `ft_strcat`, `ft_strncat`, `ft_strstr` |
| C04 | Numbers and bases | `ft_strlen`, `ft_putstr`, `ft_putnbr`, `ft_atoi`, `ft_putnbr_base` |
| C05 | Recursion and maths | `ft_iterative_factorial`, `ft_recursive_factorial`, `ft_iterative_power`, `ft_recursive_power`, `ft_fibonacci`, `ft_sqrt`, `ft_is_prime` |
| C06 | `argc` / `argv` | `ft_print_program_name`, `ft_print_params`, `ft_rev_params`, `ft_sort_params` |
| C07 | `malloc` | `ft_strdup`, `ft_range`, `ft_ultimate_range`, `ft_strjoin` |
| C08 | Header files and macros | `ft.h`, `ft_boolean.h`, `ft_abs.h`, `ft_point.h` |
| C09 | Libraries and Makefiles | `libft_creator.sh` (a first static library), a `Makefile`, `ft_split` |

### Rushes

| Rush | Subject | Team | Details |
|---|---|---|---|
| Rush00 | Draw a rectangle | alehamad, ehesse | `rush(x, y)` draws an `x` by `y` rectangle with `o` corners, `-` and `\|` edges |
| Rush01 | Skyscrapers 4×4 | alehamad, tmarigna | Fills a 4×4 grid with heights 1 to 4 so that the number of buildings seen from each side matches the 16 clues, using backtracking |
| Rush02 | Number to words | alehamad, alaigo | Reads `numbers.dict` and validates the input and the dictionary; the conversion itself was not finished |

## Build

### Requirements

- `cc` / `gcc` / `clang`
- `bash`

### Compile

Each exercise is a function without a `main`, as given to the grader. To try one, write a small `main` next to it:

```bash
git clone <repository-url> piscine
cd piscine
cc -Wall -Wextra -Werror C05/ex05/ft_sqrt.c main.c && ./a.out
```

The rushes have their own `main`:

```bash
cc -Wall -Wextra -Werror Rush00/ex00/*.c -o rush00 && ./rush00
cc -Wall -Wextra -Werror Rush01/ex00/*.c -o rush01
cd Rush02/ex00 && make
```

## Usage

```
./rush01 "<col_up x4> <col_down x4> <row_left x4> <row_right x4>"
```

The 16 clues are the number of buildings seen from the top, the bottom, the left and the right. `Error` is printed when the input is invalid or when the puzzle has no solution.

## Project structure

```
.
├── shell00/                 # ex00 → ex05
├── shell01/                 # ex01 → ex04
├── C00/ … C09/              # one folder per exercise: exNN/
├── Rush00/ex00/             # rectangle
├── Rush01/ex00/             # skyscrapers: parse, validator, visible, backtracking, print
└── Rush02/ex00/             # number to words: dictionary reading and checks
```

## Examples

```console
$ ./rush00
o---o
|   |
|   |
|   |
o---o

$ ./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3

$ ./rush01 "1 1"
Error

$ cd C09/ex00 && bash libft_creator.sh && ls libft.a
libft.a
```

## Resources

- `man` pages: `write`, `malloc`, `free`, and the original functions of each exercise (`strcpy`, `strcmp`, `atoi`, …)
- [The Norm (42 coding standard)](https://github.com/42School/norminette)
- The other students of the Piscine

## Authors

| Login | Work |
|---|---|
| **alehamad** | Every daily exercise; on the rushes, the algorithm and most of the code |
| **ehesse** | Rush00 |
| **tmarigna** | Rush01 (display) |
| **alaigo** | Rush02 (dictionary entries) |
