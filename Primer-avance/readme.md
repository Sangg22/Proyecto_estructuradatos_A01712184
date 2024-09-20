# Proyecto: Nombre de tu proyecto
SimuBasket

## Descripción del avance 1

Se crean dos clases para el uso del proyecto y un archivo CSV. En la primera clase, Player, se inicializan los atributos que tendrá el jugador de baloncesto. La segunda clase es la clase Ranking, donde se crea un vector de jugadores, y en ella también se encuentran los métodos para ordenar a los jugadores por los puntos que hayan anotado y por estatura. Además, se utiliza un archivo CSV donde se encuentran los datos de 100 jugadores, los cuales se insertan en el vector previamente creado para luego ordenarlos según estos criterios.

## Instrucciones para compilar el avance de proyecto
Ejecuta el siguiente comando en la terminal:

`g++ main.cpp -o primer_avance` 

## Instrucciones para ejecutar el avance de proyecto
Ejecuta el siguiente comando en la terminal:

`./primer_avance` 

## Descripción de las entradas del avance de proyecto

En este avance se ocupa un solo de archivo de tipo CSV en el que se alojan los datos de 100 jugadores, estos datos son los siguientes y al igual son de diferentes tipos:
- string: nombre del jugador.
- string: posición en la que juega el jugador.
- int: número del dorsal del jugador.
- int: puntos anotados por el jugaor.
- float: estatura del jugador.
Un ejemplo de esto serian los siguientes en el mismo orden:

(LeBron James,Small Forward,23,27,2.06)


## Descripción de las salidas del avance de proyecto

El programa ofrece un menú con 4 opciones para ejecutar:

Opción 1: Muestra todos los jugadores con sus datos, sin ningún orden en particular en ese momento.
Opción 2: Permite ordenar a los jugadores por la cantidad de puntos que tengan e imprimirá un mensaje indicando que los jugadores ya están ordenados por su cantidad de puntos.
Opción 3: Da la opción de poder buscar las estadisticas de un jugador en particular en base del nombre del jugador y solo imprimira los datos de ese jugador.
Opción 4: Sirve para finalizar el programa y salir de este con la ayuda de un break.
Cada vez que se selecciona entre la opción 2 o 3, el vector de jugadores se actualiza, y al usar la opción 1, se imprimirá el vector de jugadores, pero ahora siguiendo el orden seleccionado previamente.

## Desarrollo de competencias

### SICT0301: Evalúa los componentes
#### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.

Al hacer uso de este algoritmo, tendríamos tres niveles de complejidad respecto a este caso:

En el mejor de los casos, su complejidad será O(n), lo que no sería tan complicado y estaría en un nivel básico de ordenamiento. Dado que este vector está casi ordenado desde el inicio, se acercará a estar siempre en el mejor de los casos.
En el caso promedio, su complejidad será O(n^2); sin embargo, esto no será un gran inconveniente, ya que la lista está casi ordenada.
En el peor de los casos, la complejidad será la misma que en el promedio, ya que no podría ser más difícil, manteniéndose en O(n^2).

### SICT0302: Toma decisiones
#### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.

En este caso, para este avance, se seleccionó el algoritmo de ordenamiento por inserción. Esto se debe a que, en este momento, los puntos no cambiarían radicalmente y los jugadores solo se moverían unas cuantas posiciones (refiriéndose a que la lista ya está casi ordenada desde el inicio), por lo que este método sería el más adecuado para casos en los que la lista ya está parcialmente ordenada.