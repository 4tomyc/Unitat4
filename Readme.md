## En la carpeta Make tenemos:
-Primera carpeta que contiene la práctica de la calculadora. Contiene los archivos a.out, calc.c, calc.h, calc2, calc2.c, calcula, calcula.c y Makefile.

-Segunda carpeta contiene la práctica Hola.c. Contiene los archivos calc, calc.c, calc.h, gola, hola y hola.c .

-Fichero .gitignore

## Primera práctica.
Para compilar el hola.c primero creamos el fichero y lo compilamos con el comando "gcc hola.c".
Obtendremos un fichero ejecutable "a.out"
Cambiamos el nombre del fichero con el comando "gcc -Wall -g hola.c -o hola"
Usamos el comando "make hola" que generará un fichero fuente hola.c


## Segunda práctica.

Creamos el fichero calc.c con el VSC, donde pondremos las funciones para la calculadora.
Creamos el fichero calc.h con las cabeceras de las funciones anteriores.

Compilamos el fichero calc.c para obtener el fichero objeto calc.o con el comando "gcc -c calc.c -o calc.o".
Generamos el fichero calcula a partir del fichero objeto calc.o y el fichero fuente calcula.c 
con el comando "gcc calc.o calcula.c -o calcula".

Ejecutamos el programa con el comando ./calcula .

Creamos el fichero Makefile.



