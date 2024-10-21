# Proyecto: Nombre de tu proyecto
SimuBasket

## Descripción del avance 1

Se crean dos clases para el uso del proyecto y un archivo CSV. En la primera clase, Player, se inicializan los atributos que tendrá el jugador de baloncesto. La segunda clase es la clase Ranking, donde se crea un vector de jugadores, y en ella también se encuentran los métodos para ordenar a los jugadores por los puntos que hayan anotado y por estatura. Además, se utiliza un archivo CSV donde se encuentran los datos de 100 jugadores, los cuales se insertan en el vector previamente creado para luego ordenarlos según estos criterios.

## Descripción del avance 2

Se crean dos nuevas clases, una clase agregada es la clase "Team" en la que se agregan jugadores en un vector según la columna de equipo que tienen en sus datos, al igual se creo la clase "Tournament" que recibe a los equipos en una cola en la que se van usando para simular el torneo y dar los resultados aleatoriamente para saber quien gano el torneo. En el main se agregaron dos funciones en el menu, en la primera se muestran todos los integrantes de los equipos separados por una linea y en la segunda función se da la opción de simular el torneo para saber que equipo gano. Al igual se actualizo el csv para agregar una columna con el nombre del equipo al que pertenecen.

### Cambios sobre el primer avance
1. Escribe la lista de cambios realizados sobre el planteamiento original: Argumenta la razón por la que decidiste el cambio. Estos argumentos puedes retomarlos más adelante en tu argumentación de competencias.
2. Cambio 2: Elimine jugadores del csv y agregue una columa. Razón de cambio: Para dejarlo en 50 jugadores, para poder tener 10 equipos y al igual agregue la columna de equipo para poder separarlos segun su equipp
3. Cambio 3: Razón del cambio
4. etc...: etc...

## Instrucciones para compilar el avance de proyecto
Ejecuta el siguiente comando en la terminal:

`g++ main.cpp -o segundo_avance` 

## Instrucciones para ejecutar el avance de proyecto
Ejecuta el siguiente comando en la terminal:

`./segundo_avance` 

## Descripción de las entradas del avance de proyecto

En este avance se ocupa un solo de archivo de tipo CSV en el que se alojan los datos de 50 jugadores, estos datos son los siguientes y al igual son de diferentes tipos:
- string: nombre del jugador.
- string: posición en la que juega el jugador.
- int: número del dorsal del jugador.
- int: puntos anotados por el jugaor.
- float: estatura del jugador.
- string: nombre del equipo.
Un ejemplo de esto serian los siguientes en el mismo orden:

(LeBron James,Small Forward,23,27,2.06,Lakers)

## Descripción de las salidas del avance de proyecto
Opción 1: Muestra todos los jugadores con sus datos, sin ningún orden en particular en ese momento.
Opción 2: Permite ordenar a los jugadores por la cantidad de puntos que tengan e imprimirá un mensaje indicando que los jugadores ya están ordenados por su cantidad de puntos.
Opción 3: Da la opción de poder buscar las estadisticas de un jugador en particular en base del nombre del jugador y solo imprimira los datos de ese jugador.
Opción 4: Da la opcion de observar todos los equipos separando sus jugadores para saber los jugadores del equipo.
Opción 5: Da la opción de empezar el torneo donde se simula y da el resultado  del torneo con datos aleatorios.
Opción 6: Sirve para finalizar el programa y salir de este con la ayuda de un break.
Cada vez que se selecciona entre la opción 2 o 3, el vector de jugadores se actualiza, y al usar la opción 1, se imprimirá el vector de jugadores, pero ahora siguiendo el orden seleccionado previamente.

## Desarrollo de competencias

### SICT0301: Evalúa los componentes
#### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.
Al hacer uso de este algoritmo, tendríamos tres niveles de complejidad respecto a este caso:

En el mejor de los casos, su complejidad será O(n), lo que no sería tan complicado y estaría en un nivel básico de ordenamiento. Dado que este vector está casi ordenado desde el inicio, se acercará a estar siempre en el mejor de los casos.
En el caso promedio, su complejidad será O(n^2); sin embargo, esto no será un gran inconveniente, ya que la lista está casi ordenada.
En el peor de los casos, la complejidad será la misma que en el promedio, ya que no podría ser más difícil, manteniéndose en O(n^2).

#### Hace un análisis de complejidad correcto y completo de todas las estructuras de datos y cada uno de sus usos en el programa.
Se hace uso de la estructura de datos "queue" para el guardado de los equipos en el torneo, por el hecho de que se busca seguir un orden especifico de competición y se basa en tondas eliminatorias por lo que se busca una forma fácil, en este caso al usar este tipo de estructura de datos en el que se usa pop para eliminar, front para enviar al inicio de la fila y push al moverlos.
Análisis de complejidad:
Complejidad de tiempo:
Mejor caso: O(1)
Caso promedio: O(1)
Peor Caso: O(1)

Complejidad de espacio: (dependiendo de la cantidad de equipos que hay)
Mejor caso: O(n)
Caso promedio: O(n)
Peor caso: O(n)
 
 por lo que al insertar y eliminar seria O(1) y al recorrer seria O(n) por lo que por el tipo de torneo es de las mas eficientes que podria usar.


### SICT0302: Toma decisiones
#### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.
Si lograste este criterio en el primer avance, copia aquí tu argumentación. Si no, ésta es una nueva oportunidad para lograrlo. Escribe aquí tu aprendizaje y tus argumentos sobre por qué consideras que ahora ya has desarrrollado este criterio y dónde se puede observar el desarrollo que mencionas.

#### Selecciona una estructura de datos adecuada al problema y la usa correctamente.
Anteriormente fundamentado por que queue es la mejor por ser un torneo de eliminacion directa.

### SICT0303: Implementa acciones científicas
#### Implementa mecanismos para consultar información de las estructras correctos.
Se utiliza de manera correcta el front y el pop al momento de iniciar el torneo, mandando a llamar al inicio a los dos equipos que jugaran en la ronda y el pop para eliminarlos de esa cola por ya no tener la necesidad de usar los equipos en esa cola por el cambio de ronda.

#### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta.
Se utiliza un archivo de tipo .csv (Basketballplayers2.csv) en el que se menciona que se usa para dar los datos de 50 jugadores que se separan en 10 equipos y al igual en base del equipo se van agregando al vector del equipo para despues mandar el equipo a la cola del torneo e ir avanzando de ronda.
