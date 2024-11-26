# Proyecto: Nombre de tu proyecto
SimuBasket

## Descripción del avance 1

Se crean dos clases para el uso del proyecto y un archivo CSV. En la primera clase, Player, se inicializan los atributos que tendrá el jugador de baloncesto. La segunda clase es la clase Ranking, donde se crea un vector de jugadores, y en ella también se encuentran los métodos para ordenar a los jugadores por los puntos que hayan anotado y por estatura. Además, se utiliza un archivo CSV donde se encuentran los datos de 100 jugadores, los cuales se insertan en el vector previamente creado para luego ordenarlos según estos criterios.

## Descripción del avance 2

Se crean dos nuevas clases, una clase agregada es la clase "Team" en la que se agregan jugadores en un vector según la columna de equipo que tienen en sus datos, al igual se creo la clase "Tournament" que recibe a los equipos en una cola en la que se van usando para simular el torneo y dar los resultados aleatoriamente para saber quien gano el torneo. En el main se agregaron dos funciones en el menu, en la primera se muestran todos los integrantes de los equipos separados por una linea y en la segunda función se da la opción de simular el torneo para saber que equipo gano. Al igual se actualizo el csv para agregar una columna con el nombre del equipo al que pertenecen.

### Cambios sobre el primer avance

1. Se decidio hacer el cambio de metodo para ordenamiento en jugadores por puntos, se hizo el cambio de insertion por merge por el hecho de que los datos de los jugadores pueden variar y donde se logro identificar que la insertion seria mejor para un proyecto donde los datos no estuvieran tan variados y donde fuera mas pequeña la lista de jugadores.

## Descripción del avance 3

En este avance se busca la escritura de datos en documentos externos, para este avance lo que hice fue arreglar el metodo en el que se dan puntos para los jugadores dependiendo los resultados, al igual se implemento la función en la que en un nuevo documento se crea un csv con los datos de los jugadores del equipo ganador, en el menú al seleccionar torneo se da la opción de crear el documento con la nueva función.

### Cambios sobre el segundo avance

1. Escribe la lista de cambios realizados sobre el planteamiento pasado: Argumenta la razón por la que decidiste el cambio. Estos argumentos puedes retomarlos más adelante en tu argumentación de competencias.
2. Cambio 2: Razón del cambio
3. Cambio 3: Razón del cambio
4. etc...: etc...

## Entrega final

En este entregable se da el programa definitivo del programa de simulación de basket con todas las funciones incluidas anteriormente y con solo más argumentación en el apartado de Toma de decisiones.


### Cambios sobre el tercer avance avance
1. Escribe la lista de cambios realizados sobre el planteamiento pasado: Argumenta la razón por la que decidiste el cambio. Estos argumentos puedes retomarlos más adelante en tu argumentación de competencias.
2. Cambio 2: Razón del cambio
3. Cambio 3: Razón del cambio
4. etc...: etc...

## Instrucciones para compilar el proyecto
Ejecuta el siguiente comando en la terminal:

`g++ main.cpp -o final` 

## Instrucciones para ejecutar el proyecto
Ejecuta el siguiente comando en la terminal:

`./final` 

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
Opción 5: Da la opción de empezar el torneo donde se simula y da el resultado  del torneo con datos aleatorios y ahora da la opción de poder crear un documento csv nuevo con los datos de los jugadores del equipo ganador.
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

#### Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa.
Al haber hecho un análisis de los diferentes metodos que tiene el programa, en cada clase se identifica la complejidad de los metodos que tiene, se pudo llegar a que la complejidad final del programa seria de:

Mejor caso: O(1)
Caso promedio: O(n)
Peor de los casos: O(n log n)

Este análisis se realizo basandonos en la complejidad e los metodos, donde podemos observar como es que sería la complejidad final.
Donde al ser un menu, puede ser solo una opción como lo seria en la salida para el mejor de los casos y donde la mayoria de las opciones solo usan O(n) por lo que seria el promedio y donde si se decide acomodarlos es donde se usa el merge teniendo que en el peor de los casos puede ser O(n log n)

### SICT0302: Toma decisiones
#### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.

Se decidio usar el mergesort por el hecho de que al ser un torneo, siempre habrá varios jugadores en el torneo y con datos variados, por lo que merge sort se toma como opción por ser funcional para momentos en los que haya varios datos y donde habria una mejor eficiencia en el ordenamiento.
De igual manera el mergesort es adecuado para el programa desde el momento en el que el merge mantiene una estabilidad al momento de ordenar los jugadores, por lo que en este caso donde los puntos son en lo que se basa en el ordenamiento es que se busca una estabilidad en los casos en los que el jugador se mantiene con una cantidad similar de puntos y donde no se tendria que mover de posición, y el merge garantiza esta estabilidad en el sort a diferencia de otros. Al ser un proyecto que es escalable y que se puede modificar para incluir más jugadores por lo que si se vuelve un listado de jugadores muy grandes, el merge es una opción adecuada para momentos en los que la lista de jugadores sea muy grande.
Para este método se hizo un análisis en el que los casos serian de la siguiente complejidad:
Mejor caso: O(n log n)
Caso promedio: O(n log n)
Peor caso: O(n log n)
Esto es en base a que se tiene que dividir el vector varias veces para poder ordenarlo, en este caso el mejor caso no seria O(1) por el hecho de que nunca habrá solo un jugador en un torneo.

En resumen el mergesort se vuelve la opción mas adecuada para el proyecto al tomar la decisión del ordenamiento basada en eficiencia, estabilidad y adaptabilidad por si el proyecto se vuelve más complejo con más jugadores en el csv.

#### Selecciona una estructura de datos adecuada al problema y la usa correctamente.
Anteriormente fundamentado por que queue es la mejor por ser un torneo de eliminacion directa.

### SICT0303: Implementa acciones científicas
#### Implementa mecanismos para consultar información de las estructras correctos.
Se utiliza de manera correcta el front y el pop al momento de iniciar el torneo, mandando a llamar al inicio a los dos equipos que jugaran en la ronda y el pop para eliminarlos de esa cola por ya no tener la necesidad de usar los equipos en esa cola por el cambio de ronda.

#### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta.
Se utiliza un archivo de tipo .csv (Basketballplayers2.csv) en el que se menciona que se usa para dar los datos de 50 jugadores que se separan en 10 equipos y al igual en base del equipo se van agregando al vector del equipo para despues mandar el equipo a la cola del torneo e ir avanzando de ronda.

### Implementa mecanismos de escritura de archivos para guardar los datos  de las estructuras de manera correcta
Se utiliza un método de nombre UpdateCSV en el que se crea una cola en donde se van guardando los datos de los jugadores del equipo ganador para posteriormente crear un nuevo documento csv con los datos de los jugadores del equipo ganador.
