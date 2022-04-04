#!/bin/bash
<<<<<<< HEAD
gcc -Wall -Werror -Wextra -pedantic -c *.c
=======
gcc -Wall -pedantic -Werror -Wextra -c *.c
>>>>>>> a2df8020a0febd81cf6a12c9b3ae33c628cdb307
ar -rc liball.a *.o
ranlib liball.a
