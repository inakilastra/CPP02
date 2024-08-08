# CPP01

<h1>C++ - Module 02</h1>

<br />

> [!NOTE] 
> Otros Lenguajes: [English](https://github.com/inakilastra/Python_for_Data_Science_1_Array/blob/main/README.md)

<br />

> [!IMPORTANT]  
> Al final de cada fichero tienes una explicación del código.

<br />

>
> - :white_check_mark: [Subject](#subject)
>
>   - :white_check_mark: [Exercise 00](#exercise-00)

<br /><br />

>
> - :white_check_mark: [Evaluation](#evaluation)
>
>   - :white_check_mark: [Ex00](#ex00) 

<br /><br /><br /><br />

## <h2>Subject</h2>

<h3>Reglas generales</h3>

**Compilando**

- Compila tu código con c++ y los flags -Wall -Wextra -Werror

- Su código aún debería compilarse si agrega el flag -std=c++98

**Convenciones de formato y nomenclatura**

- Los directorios de ejercicios se denominarán de esta forma: ex00, ex01, ... , exn

- Nombra tus archivos, clases, funciones, funciones miembro y atributos según lo requerido en las pautas.

- Escribe nombres de clases en formato **UpperCamelCase**. Los archivos que contienen código de clase siempre se nombrarán según el nombre de la clase. Por ejemplo:
ClassName.hpp/ClassName.h, ClassName.cpp o ClassName.tpp. Luego, si tiene un archivo de encabezado que contiene la definición de una clase "BrickWall" que representa una pared de ladrillos, su nombre será BrickWall.hpp.

- A menos que se especifique lo contrario, todos los mensajes de salida deben finalizar con un carácter de nueva línea y mostrarse en la salida estándar.

- ¡Adiós Norminette! No se aplica ningún estilo de codificación en los módulos de C++. Puedes seguir tu favorito. Pero tenga en cuenta que un código que sus pares evaluadores no pueden entender es un código que no pueden calificar. Haga todo lo posible para escribir un código limpio y legible.

<br /><br />

**Permitido/Prohibido**

Ya no estás codificando en C. ¡Es hora de C++! Por lo tanto:

- Puedes utilizar casi todo lo que hay en la biblioteca estándar. Por lo tanto, en lugar de ceñirse a lo que ya sabe, sería inteligente utilizar tanto como sea posible las versiones tipo C++ de las funciones de C a las que está acostumbrado.

- Sin embargo, no puedes utilizar ninguna otra biblioteca externa. Significa que C++ 11 (y sus formas derivadas) y las bibliotecas Boost están prohibidas. Las siguientes funciones también están prohibidas: *printf(), *alloc() y free(). Si los usas tu nota será 0 y listo.

- Tenga en cuenta que, a menos que se indique explícitamente lo contrario, está prohibido utilizar el espacio de nombres <ns_name> y las palabras clave amigas. En caso contrario, tu nota será -42.

- **Puedes usar el STL solo en los Módulos 08 y 09**. Eso significa: no hay **Contenedores** (vector/lista/mapa/etc.) ni **Algoritmos** (cualquier cosa que requiera incluir el encabezado <algoritmo>) hasta entonces. En caso contrario, tu nota será -42.

<br /><br />

**Algunos requisitos de diseño**

- La pérdida de memoria también ocurre en C++. Cuando asigna memoria (usando la nueva palabra clave), debe evitar **pérdidas de memoria**.

- Desde el Módulo 02 al Módulo 09, tus clases deben estar diseñadas en la **Forma Canónica Ortodoxa, excepto cuando se indique explícitamente lo contrario**.

- Cualquier implementación de función colocada en un archivo de encabezado (excepto las plantillas de función) significa 0 para el ejercicio.

- Deberías poder utilizar cada uno de tus encabezados independientemente de los demás. Por tanto, deben incluir todas las dependencias que necesiten. Sin embargo, debes evitar el problema de la doble inclusión agregando **include guards**. En caso contrario su calificación será 0.

<br /><br />

**Léeme**

- Puede agregar algunos archivos adicionales si es necesario (es decir, dividir su código). Como estas asignaciones no están verificadas por un programa, no dude en hacerlo siempre que entregue los archivos obligatorios.

- A veces, las pautas de un ejercicio parecen breves pero los ejemplos pueden mostrar requisitos que no están escritos explícitamente en las instrucciones.

- ¡Lea cada módulo por completo antes de comenzar! De verdad, hazlo.

- ¡Por Odín, por Thor! ¡¡¡Usa tu cerebro!!!

```
Tendrás que implementar muchas clases.
Esto puede parecer tedioso, a menos que puedas programar tu editor de texto favorito.
```

```
Se le da cierta libertad para completar los ejercicios.
Sin embargo, sigue las reglas obligatorias y no seas holgazán.
¡Te perderías mucha información útil! No dudes en leer sobre conceptos teóricos.
```

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp02)
<br /><br />

<h3>Nuevas reglas</h3>

A partir de ahora, todas sus clases deben diseñarse en la forma canónica ortodoxa, a menos que se indique explícitamente lo contrario. En ese caso, implementarán las cuatro funciones miembro requeridas a continuación:

- Constructor predeterminado
- Constructor de copia
- Operador de asignación de copia
- Destructor

Divida el código de su clase en dos archivos. El archivo de encabezado (.hpp/.h) contiene la definición de la clase, mientras que el archivo fuente (.cpp) contiene la implementación.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp02)
<br /><br />

### <h3>Exercise 00</h3>

XXX

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp02)
<br /><br />


## <h2>Evaluation</h2>

<h3>Pautas</h3>

Debes compilar con clang++, con -Wall -Wextra -Werror
Como recordatorio, este proyecto está en C++98.
NO se esperan funciones de miembros o contenedores de C++ 11 (y posteriores).

Cualquiera de estos significa que no debes calificar el ejercicio en cuestión:

- Una función se implementa en un encabezado (excepto en una plantilla)

- Un Makefile se compila sin banderas y/o con algo distinto a clang++

Cualquiera de estos significa que debes marcar el proyecto como Función Prohibida:

- Uso de una función "C" (*alloc, *printf, gratis)

- Uso de una función no permitida en el tema.

- Uso de "usar espacio de nombres" o "amigo"

- Uso de una biblioteca externa o funciones de C++20

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp02)
<br /><br />

<h3>Ex00</h3>

XXX

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **subir** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp02)
<br /><br />
