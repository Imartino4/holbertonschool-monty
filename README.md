# C - Stacks, Queues - LIFO, FIFO

### Description

Project consist on creating an interpreter for Monty ByteCodes files.

#### Monty byte code files

This files are usually have the . extension. It is not required, however, most of the industry uses this standard but it is not required by the specification of the language.

![](https://i.imgur.com/lTcR9os.png)

![](https://i.imgur.com/96B66uR.png)

---

### Compilation & Testing

We complie with:

	gcc -g -Wall -Werror -Wextra -pedantic *.c -o monty

Tested memory with:

	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./monty montyfile.m

---

### File Description

- **main.c** - contains ... continue ...

---

### Authors

Written by [Denisse Landau](https://www.linkedin.com/in/denisse-l-5844a5140/ "Denisse Landau") and [Ignacio Martino](https://github.com/Imartino4/ "Ignacio Martino")
