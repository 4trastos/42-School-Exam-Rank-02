## Subject 🇬🇧

```
Assignment name  : work_bits
Expected files   : work_bits.c
Allowed functions: write, printf, &, |, << >>,
--------------------------------------------------------------------------------

Bit operators:

*** This is intended to be an aid in learning to operate with bits. ***

*** Here you can operate and demonstrate the functions that are asked of you in
Exam 02 about operating with bits. ***

Bit operators can only operate on char and int data types (decimal, hexadecimal,
and octal integers).
Bit operators perform operations on each of the bits of an integer or char.

These operators are:

• AND, represented by the (&) symbol.
• OR, represented by the symbol (|).
• XOR, represented by the symbol (^).
• One's complement, represented by the symbol ~.
• Shift to the left, is represented by two minor signs
that (").
• Shift to the right, it is represented by two major signs
that (").

The AND operation (and) compare bit by bit obtaining a result according to table AND.

Bitwise AND operation:

AND |   Bit 0   |   Bit 1   |   Result
--------------------------------------
          0     |     0     |     0
          0     |     1     |     0
          1     |     0     |     0
          1     |     1     |     1

Thus, if we perform the operation 107 (01101011 in binary) AND 27 (00011011 in binary)
we would obtain 11 (00001011 in binary).
The OR operation (|) compares bit by bit, obtaining a result according to table OR.

Bitwise OR operation:

OR  |   Bit 0   |   Bit 1   |   Result
--------------------------------------
          0     |     0     |     0
          0     |     1     |     1
          1     |     0     |     1
          1     |     1     |     1

Thus, if we perform the operation 107 (01101011 in binary) OR 27 (00011011 in binary)
we would obtain 123 (01111011 in binary).
The XOR (^) operation compares bit by bit obtaining a result according to table XOR.

Bitwise XOR operation:

XOR |   Bit 0   |   Bit 1   |   Result
--------------------------------------
          0     |     0     |     0
          0     |     1     |     1
          1     |     0     |     1
          1     |     1     |     0


Thus, if we perform the operation 107 (01101011 in binary) XOR 27 (00011011 in binary)
we would obtain 112 (01110000 in binary).
The one's complement operator (~) simply inverts each of the bits.
Thus, ~01101011 is equal to 10010100 and ~00011011 is equal to 11100100.
The left shift operator («) shifts the bits to the left as many positions as indicated
after the operator, placing the least significant bit (rightmost bit) with a zero, and

the most significant bit (bit leftmost) is discarded.

Let's look at an example in which a shift to the right is applied to a variable.
left of a bit:

int main (void)
{
    int left = 1;
    left = left << 1;
}

At initialization, the left variable has a value of 1, which in binary is 00000001.
But what happens in the shift left operation? We can see it in the figure below:

                         ___ ___ ___ ___ ___ ___
                        | 0 | 0 | 0 | 0 | 0 | 1 |  Before moving.                         
                         ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯
The most                /   /   /   /   /   /
significant bit          ___ ___ ___ ___ ___ ___
is discarded   --->  X  | 0 | 0 | 0 | 0 | 1 | 0 |  After displacement.
                         ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯
                                              ^
                                      A zero is entered
                                         in the least
                                       significant bit

As can be seen, the result of the shift is 00000010 in binary, whose equivalent value in
decimal is 2. This value is then assigned to the left variable.
The right shift operator (») shifts the bits to the right as many positions as indicated 
after the operator, with the most significant bit being set to a zero, and the least significant
bit being discarded. Let's now look at an example of shifting a bit to the right:

int main (void)
{
    int right = 1;
    right = right >> 1;
}

At initialization, the right variable has a value of 1, which in binary is 00000001. Let's
look in the figure below to see how the movement is performed.

                         ___ ___ ___ ___ ___ ___
Before moving.          | 0 | 0 | 0 | 0 | 0 | 1 |                         
                         ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯
                            \   \   \   \   \   \         The most
                         ___ ___ ___ ___ ___ ___          significant bit
After displacement.     | 0 | 0 | 0 | 0 | 0 | 0 |  X <--- is discarded.          
                         ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯         
                          ^
                   A zero is entered
                      in the least
                    significant bit

As can be seen, the result of the shift is 00000000 in binary, whose equivalent value in
decimal is 0. This value is then assigned to the right variable.
```

## Subject 🇪🇸

```
Nombre de la tarea: work_bits
Archivos esperados: work_bits.c
Funciones permitidas: write, printf, &, |, << >>,
--------------------------------------------------------------------------------

Operadores de bits:

*** Esto tiene como objetivo ser una ayuda para aprender a operar con bits. ***

*** Aquí puede operar y demostrar las funciones que se le piden en el
Examen 02 sobre operaciones con bits. ***

Los operadores de bits solo pueden operar en tipos de datos char e int (enteros decimales, hexadecimales y octales).
Los operadores de bits realizan operaciones en cada uno de los bits de un entero o char.

Estos operadores son:

• AND, representado por el símbolo (&).
• OR, representado por el símbolo (|).
• XOR, representado por el símbolo (^).
• Complemento a uno, representado por el símbolo ~.
• Desplazamiento a la izquierda, se representa con dos signos menores
que (").
• Desplazamiento a la derecha, se representa con dos signos mayores
que (").

La operación AND (and) compara bit a bit obteniendo un resultado según la tabla AND.

Operación AND bit a bit:

AND |   Bit 0   |   Bit 1   |   Result
--------------------------------------
          0     |     0     |     0
          0     |     1     |     0
          1     |     0     |     0
          1     |     1     |     1

Así, si realizamos la operación 107 (01101011 en binario) AND 27 (00011011 en binario)
obtendríamos 11 (00001011 en binario).
La ​​operación OR (|) compara bit a bit, obteniendo un resultado según la tabla OR.

Operación OR bit a bit:

OR  |   Bit 0   |   Bit 1   |   Result
--------------------------------------
          0     |     0     |     0
          0     |     1     |     1
          1     |     0     |     1
          1     |     1     |     1

Así, si realizamos la operación 107 (01101011 en binario) OR 27 (00011011 en binario)
obtendríamos 123 (01111011 en binario).
La ​​operación XOR (^) compara bit a bit obteniendo un resultado según la tabla XOR.

Operación XOR bit a bit:

XOR |   Bit 0   |   Bit 1   |   Result
--------------------------------------
          0     |     0     |     0
          0     |     1     |     1
          1     |     0     |     1
          1     |     1     |     0

Así, si realizamos la operación 107 (01101011 en binario) XOR 27 (00011011 en binario)
obtendríamos 112 (01110000 en binario).
El operador complemento a uno (~) simplemente invierte cada uno de los bits.
Por lo tanto, ~01101011 es igual a 10010100 y ~00011011 es igual a 11100100.
El operador de desplazamiento a la izquierda («) desplaza los bits a la izquierda tantas posiciones como se indique
después del operador, colocando el bit menos significativo (bit más a la derecha) con un cero, y

el bit más significativo (bit más a la izquierda) se descarta.

Veamos un ejemplo en el que se aplica un desplazamiento a la derecha a una variable.
a la izquierda de un bit:

int main (void)
{
int left = 1;
left = left << 1;
}

En la inicialización, la variable izquierda tiene un valor de 1, que en binario es 00000001.
Pero, ¿qué sucede en la operación de desplazamiento a la izquierda? Podemos verlo en la siguiente figura:

                         ___ ___ ___ ___ ___ ___
                        | 0 | 0 | 0 | 0 | 0 | 1 |  Before moving.                         
                         ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯
The most                /   /   /   /   /   /
significant bit          ___ ___ ___ ___ ___ ___
is discarded   --->  X  | 0 | 0 | 0 | 0 | 1 | 0 |  After displacement.
                         ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯
                                              ^
                                      A zero is entered
                                         in the least
                                       significant bit

Como se puede ver, el resultado del desplazamiento es 00000010 en binario, cuyo valor equivalente en
decimal es 2. Este valor se asigna entonces a la variable de la izquierda.
El operador de desplazamiento a la derecha (») desplaza los bits hacia la derecha tantas posiciones como se indique
después del operador, con el bit más significativo establecido en cero y el bit menos significativo descartado. Veamos ahora un ejemplo de desplazamiento de un bit hacia la derecha:

int main (void)
{
int right = 1;
right = right >> 1;
}

En la inicialización, la variable derecha tiene un valor de 1, que en binario es 00000001. Veamos
la siguiente figura para ver cómo se realiza el movimiento.

                         ___ ___ ___ ___ ___ ___
Before moving.          | 0 | 0 | 0 | 0 | 0 | 1 |                         
                         ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯
                            \   \   \   \   \   \         The most
                         ___ ___ ___ ___ ___ ___          significant bit
After displacement.     | 0 | 0 | 0 | 0 | 0 | 0 |  X <--- is discarded.          
                         ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯         
                          ^
                   A zero is entered
                      in the least
                    significant bit

Como se puede ver, el resultado del desplazamiento es 00000000 en binario, cuyo valor equivalente en
decimal es 0. Este valor se asigna entonces a la variable derecha.
```
